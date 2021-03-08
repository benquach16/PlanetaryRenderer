#pragma once

#include <SDL2/SDL.h>

class Renderer
{
public:
    Renderer();

private:
    SDL_Window* m_window;
};
