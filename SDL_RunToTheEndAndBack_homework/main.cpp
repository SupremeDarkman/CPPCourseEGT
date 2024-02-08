#include <SDL_image.h>
#include <SDL.h>
#include <iostream>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int IMAGE_WIDTH = 100;
const int IMAGE_HEIGHT = 100;
const int SPEED_INCREMENT = 1;

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
SDL_Texture* texture = nullptr;

void init() {
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("RunToEndAndBack", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
}

void loadTexture() {
	SDL_Surface* surface = IMG_Load("assets/RunningPerson.jpg");
	texture = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);
}

void close() {
	SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

int main(int argc, char* args[]) {
	init();
	loadTexture();

	int xPos = 0;
	int yPos = (WINDOW_HEIGHT - IMAGE_HEIGHT) / 2;
	int xVel = 1;
	int speed = 1;
	bool flipHorizontal = false;

	SDL_Event event;
	bool running = false;

	while (!running) {
		while (SDL_PollEvent(&event) != 0) {
			if (event.type == SDL_QUIT) {
				running = true;
			}
		}

		// Clear the screen
		SDL_RenderClear(renderer);

		// Render the texture with horizontal flip
		SDL_Rect dstRect = { xPos, yPos, IMAGE_WIDTH, IMAGE_HEIGHT };
		SDL_RenderCopyEx(renderer, texture, nullptr, &dstRect, 0.0, nullptr, flipHorizontal ? SDL_FLIP_HORIZONTAL : SDL_FLIP_NONE);

		// Update the screen
		SDL_RenderPresent(renderer);

		// Move the image
		xPos += xVel * speed;

		// Check if the image reached the edges
		if (xPos <= 0 || xPos >= WINDOW_WIDTH - IMAGE_WIDTH) {
			xVel = -xVel; // Reverse direction
			speed += SPEED_INCREMENT; // Increase speed
			flipHorizontal = !flipHorizontal; // Toggle horizontal flip
		}

		// Delay to control frame rate
		SDL_Delay(10);
	}

	close();
	return 0;
}
