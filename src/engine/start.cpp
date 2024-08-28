#include "engine.hpp"


void Engine::start()
{
  initialize_sdl();
  create_main_window();
  create_main_window_renderer();
}

void Engine::initialize_sdl()
{
  check_negative_val(SDL_Init(SDL_INIT_VIDEO));
}

void Engine::create_main_window()
{
  main_window = SDL_CreateWindow(m_main_window_name.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, m_screen_width, m_screen_height, SDL_WINDOW_SHOWN);
  check_null_ptr(main_window);
}

void Engine::create_main_window_renderer()
{
  main_window_renderer = SDL_CreateRenderer(main_window, -1, SDL_RENDERER_ACCELERATED);
  check_null_ptr(main_window_renderer);

  // default black screen for window
  SDL_SetRenderDrawColor(main_window_renderer, 0, 0, 0, 255);
  SDL_RenderClear(main_window_renderer);
  SDL_RenderPresent(main_window_renderer);
}