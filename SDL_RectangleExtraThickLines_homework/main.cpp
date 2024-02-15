#include <iostream>
#include "WinInit.h"

WinInit* win = nullptr;
const int WINDOW_WIDTH = 600;
const int WINDOW_HEIGHT = 400;

int main(int argc, char* argv[])
{
	win = new WinInit();
	win->init("My new window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);

	while (win->isRunning())
	{
		win->handleEvents();
		win->update();
		win->render();
	}
	win->clean();

	return 0;
}