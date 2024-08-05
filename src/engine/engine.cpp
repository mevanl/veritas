#include "engine.h"


Engine::Engine()
{
  check_negative_val(SDL_Init(SDL_INIT_VIDEO));
}


Engine::~Engine()
{
  SDL_Quit();
}
