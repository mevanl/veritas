#include "renderer.h"


Renderer::Renderer()
{}

void Renderer::create_renderer(SDL_Window* main_window)
{
  renderer = SDL_CreateRenderer(main_window, -1, SDL_RENDERER_ACCELERATED);
  check_null_ptr(renderer);

  // TEMP TEST CODE
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}

Renderer::~Renderer()
{
  SDL_DestroyRenderer(renderer);
  renderer = NULL;
}
