#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

class App
{
public:
	App();
	~App();

	bool init(const char* title, int xpos, int ypos, int w, int h, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
	bool isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown, int xUp, int yUp);

private:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	bool running;
	int mouseDownX, mouseDownY;
	SDL_Texture* clickableTexture;
	SDL_Rect clickableRect;
};

