#include "engine.hpp"


void Engine::start()
{
  initialize_sdl();
  create_main_window();
  create_renderer();
  //create_viewports
  
  main_loop();
}

void Engine::initialize_sdl()
{
  check_negative_val(SDL_Init(SDL_INIT_VIDEO));
}

void Engine::create_main_window()
{
  main_window = SDL_CreateWindow("Veritas", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, p_screen_width, p_screen_height, SDL_WINDOW_SHOWN);
  check_null_ptr(main_window);
}

void Engine::create_renderer()
{
  renderer = SDL_CreateRenderer(main_window, -1, SDL_RENDERER_ACCELERATED);
  check_null_ptr(renderer);

  // default black screen for window
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}