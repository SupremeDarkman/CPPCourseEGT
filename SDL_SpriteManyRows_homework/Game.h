#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

class Game
{
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int w, int h, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();

private:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	bool running;
	int currentFrame;
};

