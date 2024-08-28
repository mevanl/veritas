#include "engine.hpp"


void Engine::start()
{
  initialize_sdl();

  main_window.set_dimensions(800, 800);
  main_window.window_name = "Veritas";
  main_window.start();
}

void Engine::initialize_sdl()
{
  check_negative_val(SDL_Init(SDL_INIT_VIDEO));
}