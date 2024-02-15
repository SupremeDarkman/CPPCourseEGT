#pragma once
#include <SDL.h>
class WinInit
{
public:
	WinInit();
	~WinInit();
	bool init(const char* title, int xpos, int ypos, int w, int h, int flags);
	void drawRectangleLines(int lines, int ww, int wh);
	void render();
	void handleEvents();
	void update();
	void clean();
	bool isRunning();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	bool running;
};