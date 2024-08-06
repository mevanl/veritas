#include "engine.h"


Engine::Engine()
{
  check_negative_val(SDL_Init(SDL_INIT_VIDEO));
  renderer.create_renderer(main_window.window_getter());
}


Engine::~Engine()
{
  SDL_Quit();
}
