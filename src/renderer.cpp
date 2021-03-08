#include "renderer.h"

Renderer::Renderer()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        
    }
    m_window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        1600, 900, SDL_WINDOW_VULKAN | SDL_WINDOW_SHOWN);
}
