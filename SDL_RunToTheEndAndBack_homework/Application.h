#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <memory>

class Application
{
public:
    Application();
    ~Application();

    void loop();
    void update(double delta_time);
    void draw();
private:
    SDL_Texture* image;
    SDL_Rect     srcImage_position;
    SDL_Rect     destImage_position;
    double       image_x;
    double       image_y;

    SDL_Renderer* renderer;
    SDL_Texture* tex;
    SDL_Window* window;
    SDL_Surface* window_surface;
    SDL_Event    window_event;
};