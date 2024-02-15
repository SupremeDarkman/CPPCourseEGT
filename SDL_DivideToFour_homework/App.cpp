#include "App.h"
#include <iostream>
App::App()
{
	App::window = nullptr;
	App::renderer = nullptr;
	App::running = true;
}

App::~App()
{
	delete window;
	delete renderer;
}

bool App::init(const char* title, int xpos, int ypos, int w, int h, int flags)
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

				TextureManager::Instance()->loadTexture("assets/first.jpg", "first", renderer);
				TextureManager::Instance()->loadTexture("assets/second.png", "second", renderer);
				TextureManager::Instance()->loadTexture("assets/third.png", "third", renderer);
				TextureManager::Instance()->loadTexture("assets/fourth.bmp", "fourth", renderer);
				SDL_Surface* tempSurface = IMG_Load("assets/dog.jpg");
				clickableTexture = SDL_CreateTextureFromSurface(renderer, tempSurface);
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

void App::render()
{
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);
	SDL_RenderClear(renderer);

	int ww, wh; // Window width & heigth
	SDL_GetWindowSize(window, &ww, &wh);

	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);
	SDL_Rect fillRect = { 0, 0, ww / 2, wh / 2 };
	SDL_RenderFillRect(renderer, &fillRect);

	//SDL_Rect outlineRect = { ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3 };
	//SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF);
	//SDL_RenderDrawRect(renderer, &outlineRect);

	SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF);
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);
	SDL_RenderDrawLine(renderer, ww / 2, 0, ww / 2, wh);

	TextureManager::Instance()->drawTexture("first", 0, 0, ww / 2, wh / 2, renderer, SDL_FLIP_NONE);
	TextureManager::Instance()->drawTexture("second", ww / 2 + 1, 0, ww / 2, wh / 2, renderer, SDL_FLIP_NONE);
	TextureManager::Instance()->drawTexture("third", 0, wh / 2 + 1, ww / 2, wh / 2, renderer, SDL_FLIP_NONE);
	TextureManager::Instance()->drawTexture("fourth", ww / 2 + 1 , wh / 2 + 1, ww / 2 , wh / 2, renderer, SDL_FLIP_NONE);
	SDL_QueryTexture(clickableTexture, 0, 0, &ww, &wh);
	clickableRect = { 0, 0, ww / 2 , wh / 2};



	//SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
	//for (int i = 0; i < wh; i+=4)
	//{
	//	SDL_RenderDrawPoint(renderer, ww / 2, i);
	//}
	SDL_RenderPresent(renderer);
}

bool App::isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown, int xUp, int yUp)
{
	int tw, th;
	SDL_QueryTexture(t, 0, 0, &tw, &th);

	// 't' is rendered on the screen and lies within the coordinates below
	//(r->x)--------(r->x + tw)
	//     |        |
	//     |        |
	//(r->y)--------(r->y + th)

	// checks if the cursor position during the click time is inside the coordinates
	if ((xDown > r->x && xDown < (r->x + tw)) && (xUp > r->x && xUp < (r->x + tw)) &&
		(yDown > r->y && yDown < (r->y + th)) && (yUp > r->y && yUp < (r->y + th))) {
		// if all coordinates fall inside the rendered texture, the texture is clicked
		return true;
	}
	// the click was outside the texture
	return false;
}

void App::update()
{
}

void App::handleEvents()
{
	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type) 
		{
		case SDL_QUIT: running = false; break;
		case SDL_MOUSEBUTTONDOWN: 
		{
			int msx, msy;
			if (event.button.button == SDL_BUTTON_LEFT) 
			{
				// When the left mouse button is pressed down, record the cursor position
				// to be used when checking if a texture was clicked;
				SDL_GetMouseState(&msx, &msy);
				mouseDownX = msx;
				mouseDownY = msy;
			}
		}; break;
		case SDL_MOUSEBUTTONUP: 
		{
			int msx, msy;
			if (event.button.button == SDL_BUTTON_LEFT) 
			{
				// When the left mouse button is let go, check if the texture was pressed and log the result
				SDL_GetMouseState(&msx, &msy);
				std::cout << (isClickableTextureClicked(clickableTexture, &clickableRect, mouseDownX, mouseDownY, msx, msy) ? "CLICKED " : "NOT CLICKED ");
				bool isClicked = (isClickableTextureClicked(clickableTexture, &clickableRect, mouseDownX, mouseDownY, msx, msy));
				if (isClicked)
				{

				}
			}
		}; break;
		default: break;
		}
	}
}

void App::clean()
{
	std::cout << "Cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool App::isRunning()
{
	return running;
}
