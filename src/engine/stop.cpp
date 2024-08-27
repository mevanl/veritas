#include "engine.hpp"


void Engine::stop()
{
  SDL_DestroyWindow(main_window);
  main_window = NULL;
  
  SDL_DestroyRenderer(renderer);
  renderer = NULL;

  SDL_Quit();
}