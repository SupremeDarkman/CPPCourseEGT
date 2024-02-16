#include "Game.h"
#include <iostream>
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

				TextureManager::Instance()->loadTexture("assets/dog.jpg", "dog", renderer);
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
	SDL_RenderClear(renderer);

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);

	SDL_SetRenderDrawColor(renderer, 0x453, 0x345, 0x345, 0xFF);;

	TextureManager::Instance()->drawOneFrameFromTexture("dog", 0, 0, 340, 250, 1, currentFrame, renderer, SDL_FLIP_NONE);
	//TextureManager::Instance()->drawOneFrameFromTexture("dog", 0, 0, 340, 250, 2, currentFrame, renderer, SDL_FLIP_NONE);

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
