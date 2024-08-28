#include "engine.hpp"


void Engine::start()
{
  initialize_sdl();
  main_window.start();
}

void Engine::initialize_sdl()
{
  check_negative_val(SDL_Init(SDL_INIT_VIDEO));
}