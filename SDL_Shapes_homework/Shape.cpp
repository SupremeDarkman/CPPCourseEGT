#include "Shape.h"
#include <vector>

const double PI = 3.1415;

void Shape::drawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius) // Midpoint Circle Algorithm
{
	const int diameter = radius * 2;

	int x = (radius - 1);
	int y = 0;
	int tx = 1;
	int ty = 1;
	int error = tx - diameter;

	while (x >= y)
	{
		SDL_RenderDrawPoint(renderer, centerX + x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX + x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY + x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY + x);
		if (error <= 0)
		{
			y++;
			error += ty;
			ty += 2;
		}

		if (error > 0)
		{
			x--; 
			tx += 2;
			error += tx - diameter;
		}
	}
}

void Shape::drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int size)
{
	const int numSide = 5;
	const double angleIncrement = 2 * PI / numSide;

	SDL_Point* points = new SDL_Point[numSide];
	SDL_Point p;

	for (unsigned i = 0; i < numSide; ++i) {
		int x = centerX + int(size * cos(i * angleIncrement));
		int y = centerY + int(size * sin(i * angleIncrement));
		p.x = x;
		p.y = y;
		points[i] = p;
		if (i > 0)
		{
			SDL_RenderDrawLine(renderer, points[i - 1].x, points[i - 1].y, points[i].x, points[i].y);
		}
	}

	//points.push_back(points.front());
	
	SDL_RenderDrawLine(renderer, points[0].x, points[0].y, points[numSide-1].x, points[numSide-1].y);
	
	delete[] points;
}

void Shape::drawHexagon(SDL_Renderer* renderer, int centerX, int centerY, int size)
{
	const int numSide = 6;
	const double angle = PI / 3;

	SDL_Point* points = new SDL_Point[numSide];
	SDL_Point p;

	for (unsigned i = 0; i < numSide; i++)
	{
		int x = centerX + int(size * cos(i * angle));
		int y = centerY + int(size * sin(i * angle));

		p.x = x;
		p.y = y;
		points[i] = p;

		if (i > 0) 
		{
			SDL_RenderDrawLine(renderer, points[i - 1].x, points[i - 1].y, points[i].x, points[i].y);
		}
	}

	SDL_RenderDrawLine(renderer, points[0].x, points[0].y, points[numSide - 1].x, points[numSide - 1].y);

	delete[] points;
}

void Shape::drawTriangle(SDL_Renderer* renderer, int centerX, int centerY, int size)
{
	const int numSide = 3;
	const double angle = 2 * PI / numSide;

	SDL_Point* points = new SDL_Point[numSide];
	SDL_Point p;

	for (unsigned i = 0; i < numSide; i++)
	{
		int x = centerX + int(size * cos(i * angle));
		int y = centerY + int(size * sin(i * angle));

		p.x = x;
		p.y = y;
		points[i] = p;

		if (i > 0)
		{
			SDL_RenderDrawLine(renderer, points[i - 1].x, points[i - 1].y, points[i].x, points[i].y);
		}
	}

	SDL_RenderDrawLine(renderer, points[0].x, points[0].y, points[numSide - 1].x, points[numSide - 1].y);

	delete[] points;
}
void drawEllipsePoints(SDL_Renderer* renderer, int centerX, int centerY, int x, int y)
{
	SDL_RenderDrawPoint(renderer, centerX + x, centerY + y);
	SDL_RenderDrawPoint(renderer, centerX - x, centerY + y);
	SDL_RenderDrawPoint(renderer, centerX + x, centerY - y);
	SDL_RenderDrawPoint(renderer, centerX - x, centerY - y);
}
void Shape::drawEllipse(SDL_Renderer* renderer, int centerX, int centerY, int radiusX, int radiusY)
{
	int rxSq = radiusX * radiusX;
	int rySq = radiusY * radiusY;
	int twoRxSq = 2 * rxSq;
	int twoRySq = 2 * rySq;
	int p;
	int x = 0;
	int y = radiusY;
	int px = 0;
	int py = twoRxSq * y;

	// Draw the initial points in each quadrant
	drawEllipsePoints(renderer, centerX, centerY, x, y);

	// Region 1
	p = round(rySq - (rxSq * radiusY) + (0.25 * rxSq));
	while (px < py) {
		x++;
		px += twoRySq;
		if (p < 0)
			p += rySq + px;
		else {
			y--;
			py -= twoRxSq;
			p += rySq + px - py;
		}
		drawEllipsePoints(renderer, centerX, centerY, x, y);
	}

	// Region 2
	p = round(rySq * (x + 0.5) * (x + 0.5) + rxSq * (y - 1) * (y - 1) - rxSq * rySq);
	while (y > 0) {
		y--;
		py -= twoRxSq;
		if (p > 0)
			p += rxSq - py;
		else {
			x++;
			px += twoRySq;
			p += rxSq - py + px;
		}
		drawEllipsePoints(renderer, centerX, centerY, x, y);
	}
}


