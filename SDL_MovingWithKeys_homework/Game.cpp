#include "Game.h"
#include <iostream>
#include <SDL_image.h>

Game::Game()
{
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
}

Game::~Game()
{
	delete window;
	delete renderer;
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "SDL init success\n";
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0)
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0)
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

				SDL_Surface* tempSurface = IMG_Load("assets/Car.jpg");
				textTexture = SDL_CreateTextureFromSurface(renderer, tempSurface);
				SDL_FreeSurface(tempSurface);

				SDL_GetWindowSize(window, &ww, &wh);

				SDL_QueryTexture(textTexture, 0, 0, &tw, &th);
				dRect = { ww / 2 - tw / 2,wh / 2 - th / 2,tw,th };
			}
			else
			{
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else
		{
			std::cout << "window init failed\n";
			return false;
		}
		std::cout << "init success\n";
		running = true;
		return true;
	}
}

void Game::render() 
{
	SDL_RenderClear(renderer);

	SDL_RenderCopy(renderer, textTexture, NULL, &dRect);

	SDL_RenderPresent(renderer);
}

void Game::update()
{
}

void Game::handleEvents()
{
	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT: running = false; break;
		case SDL_MOUSEBUTTONUP:
		{
			if (event.button.button == SDL_BUTTON_LEFT)
			{
				SDL_GetMouseState(&mouseDownX, &mouseDownY);
				SDL_QueryTexture(textTexture, 0, 0, &tw, &th);
				dRect= { mouseDownX - tw/2, mouseDownY - th/2, tw, th };
			}
		}; break;
		case SDL_KEYDOWN:
		{
			if (event.key.keysym.sym == SDLK_LEFT)
			{
				dRect.x -= 10;
			}
			if (event.key.keysym.sym == SDLK_RIGHT)
			{
				dRect.x += 10;
			}
			if (event.key.keysym.sym == SDLK_UP)
			{
				dRect.y -= 10;
			}
			if (event.key.keysym.sym == SDLK_DOWN)
			{
				dRect.y += 10;
			}
		}; break;
		default: break;
		}
	}
}


void Game::clean()
{
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning()
{
	return Game::running;
}