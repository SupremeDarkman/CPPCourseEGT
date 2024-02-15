#include "WinInit.h"
#include <iostream>

WinInit::WinInit()
{
    renderer = nullptr;
    window = nullptr;
    running = true;
}

WinInit::~WinInit()
{

}

bool WinInit::init(const char* title, int xpos, int ypos, int w, int h, int flags)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "SDL init success\n";
		window = SDL_CreateWindow(title, xpos, ypos, w, h, flags);
		if (window != 0) 
		{
			std::cout << "Window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) 
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
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

void WinInit::drawRectangleLines(int lines, int ww, int wh)
{
	SDL_Rect r = { ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3 };
	SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0xFF, 0xFF);
	int i = 0;
	do
	{
		++i;
		SDL_RenderDrawRect(renderer, &r);
		r = { ww / 6 + i, wh / 6 + i, (ww * 2 / 3) - i/2, (wh * 2 / 3) - i/2};
	} while (lines > i);
}

void WinInit::render() {
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);
	SDL_RenderClear(renderer);

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);

	drawRectangleLines(4, ww, wh);
	SDL_RenderPresent(renderer);
}

void WinInit::update()
{
}

void WinInit::handleEvents()
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

void WinInit::clean()
{
	std::cout << "Cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool WinInit::isRunning()
{
	return running;
}

