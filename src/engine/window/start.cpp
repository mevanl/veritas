#include "window.hpp"


void Window::start()
{
  create_window_and_renderer();
}


void Window::create_window_and_renderer()
{
  window = SDL_CreateWindow(window_name.c_str(),
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            window_width,
                            window_height,
                            SDL_WINDOW_SHOWN);
  check_null_ptr(window);

  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  check_null_ptr(renderer);

  // default black screen for window
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}