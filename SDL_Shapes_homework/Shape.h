#pragma once
#include "Game.h"
class Shape
{
public:
	static void drawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius);
	static void drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int size);
	static void drawHexagon(SDL_Renderer* renderer, int centerX, int centerY, int size);
	static void drawTriangle(SDL_Renderer* renderer, int centerX, int centerY, int size);
	static void drawEllipse(SDL_Renderer* renderer, int centerX, int centerY, int a, int b);
};

