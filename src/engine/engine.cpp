// TODO: 1. Starts SDL
//       2. Creates window
#include "engine.h"

void Engine::start_sdl()
{
  check_negative_val(SDL_Init(SDL_INIT_VIDEO));
}

void Engine::kill_sdl()
{
  SDL_Quit();
}


Engine::Engine()
{
  start_sdl();
}

Engine::~Engine()
{
  kill_sdl();
}
