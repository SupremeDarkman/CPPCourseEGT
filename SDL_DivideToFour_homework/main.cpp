#include "App.h"
#include <iostream>

App* app = nullptr;
const int WINDOW_WIDTH = 600;
const int WINDOW_HEIGHT = 600;

int main(int argc, char* argv[])
{
	app = new App();
	app->init("My new window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);

	while (app->isRunning())
	{
		app->handleEvents();
		app->update();
		app->render();
	}
	app->clean();

	return 0;
}