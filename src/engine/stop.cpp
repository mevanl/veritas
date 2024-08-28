#include "engine.hpp"


void Engine::stop()
{
  SDL_DestroyWindow(main_window);
  main_window = NULL;
  
  SDL_DestroyRenderer(main_window_renderer);
  main_window_renderer = NULL;

  SDL_Quit();
}