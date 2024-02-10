#include "Game.h"
#include <iostream>
int c = 0;
Game::Game()
{
	Game::window = nullptr;
	Game::renderer = nullptr;
	Game::running = true;
	Game::currentFrame = 0;
}

Game::~Game()
{
}

bool Game::init(const char* title, int xpos, int ypos, int w, int h, int flags)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "SDL init success\n";
		window = SDL_CreateWindow(title, xpos, ypos, w, h, flags);
		if (window != 0) // window init success
		{
			std::cout << "Window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

				TextureManager::Instance()->loadTexture("assets/ooo.bmp", "ooo", renderer);
				TextureManager::Instance()->loadTexture("assets/dog3.png", "dog3", renderer);
			}
			else
			{
				std::cout << "Renderer init failed\n";
				return false;
			}
		}
		else
		{
			std::cout << "Window init failed\n";
			return false;
		}
	}
	else
	{
		std::cout << "SDL init failed\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}

void Game::render() {
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);
	SDL_RenderClear(renderer);

	int ww, wh; // Window width & heigth
	SDL_GetWindowSize(window, &ww, &wh);
	//SDL_Rect fillRect = { ww / 4, wh / 4, ww / 2, wh / 2 };
	//SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
	//SDL_RenderFillRect(renderer, &fillRect);

	//SDL_Rect outlineRect = { ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3 };
	//SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF);
	//SDL_RenderDrawRect(renderer, &outlineRect);

	//SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
	//SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

	//SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
	//for (int i = 0; i < wh; i+=4)
	//{
	//	SDL_RenderDrawPoint(renderer, ww / 2, i);
	//}
	SDL_SetRenderDrawColor(renderer, 0x453, 0x345, 0x345, 0xFF);

	Shape::drawCircle(renderer, ww / 2, wh / 2, wh/2-5);
	Shape::drawPentagon(renderer, ww / 2, wh / 2, wh / 2 - 5);
	Shape::drawHexagon(renderer, ww / 2, wh / 2, wh / 2 - 5);
	Shape::drawTriangle(renderer, ww / 2, wh / 2, wh / 2 - 5);
	Shape::drawEllipse(renderer, ww / 2, wh / 2, wh/4 , wh/8);

	SDL_RenderPresent(renderer);
}

void Game::update()
{
	currentFrame = int(((SDL_GetTicks() / 100) % 3));
}

void Game::handleEvents()
{
	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;
		}
	}
}

void Game::clean()
{
	std::cout << "Cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning()
{
	return running;
}
