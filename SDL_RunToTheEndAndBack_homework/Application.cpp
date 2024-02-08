#include "Application.h"
#include <iostream>

const int WINDOW_WIDTH = 680, WINDOW_HEIGTH = 480;
SDL_Texture* load_surface(char const* path, SDL_Renderer* ren, SDL_Texture* tex)
{
    SDL_Surface* image_surface = IMG_Load(path);

    if (!image_surface)
        return 0;
    tex = SDL_CreateTextureFromSurface(ren, image_surface);
    //SDL_FreeSurface(image_surface);

    return tex;
}

Application::Application()
{
    window = SDL_CreateWindow("SDL2 Window",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH, WINDOW_HEIGTH,
        0);

    if (!window)
    {
        std::cout << "Failed to create window\n";
        std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
        return;
    }

    renderer = SDL_CreateRenderer(window, -1, 0);
    //window_surface = SDL_GetWindowSurface(window);

    if (!renderer)
    {
        std::cout << "Failed to get window's surface\n";
        std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
        return;
    }

    image = load_surface("assets/RunningPerson.jpg", renderer, tex);

    srcImage_position.x = WINDOW_WIDTH/2;
    srcImage_position.y = WINDOW_HEIGTH/2;
    srcImage_position.w = destImage_position.w = 22;
    srcImage_position.h = destImage_position.h = 43;

    destImage_position.x = 100;
    destImage_position.y= 100;
}

Application::~Application()
{
    //SDL_FreeSurface(window_surface);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}

void Application::loop()
{
    bool keep_window_open = true;
    while (keep_window_open)
    {
        while (SDL_PollEvent(&window_event) > 0)
        {
            switch (window_event.type)
            {
            case SDL_QUIT:
                keep_window_open = false;
                break;
            }
        }

        update(1.0 / 160.0);
        draw();
    }
}
bool crossed = false;
void Application::update(double delta_time)
{

    if (srcImage_position.x + srcImage_position.w != WINDOW_WIDTH && !crossed)
    {
        image_x = image_x + (5 * delta_time);
        srcImage_position.x = image_x;
    }
    else
    {
        crossed = true;
        SDL_RenderClear(renderer);
        SDL_RenderCopyEx(renderer, tex, &srcImage_position, &destImage_position, 0, 0, SDL_FLIP_NONE);
        SDL_RenderPresent(renderer);
        image_x = image_x - (5 * delta_time);
        srcImage_position.x = image_x;
    }
}

void Application::draw()
{
    SDL_RenderClear(renderer);
    
    SDL_RenderCopyEx(renderer, tex, &srcImage_position, &destImage_position, 0, 0, SDL_FLIP_NONE);

    SDL_RenderPresent(renderer);
}