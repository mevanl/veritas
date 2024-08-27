#include "engine.hpp"

void Engine::check_negative_val(int ret_val)
{
  if (ret_val < 0)
  {
    std::cout << "SDL ERROR: " << SDL_GetError() << std::endl;
    stop();
    exit(1);
  }
}

void* Engine::check_null_ptr(void* ptr)
{
  if (ptr == NULL)
  {
    std::cout << "SDL ERROR: " << SDL_GetError() << std::endl;
    stop();
    exit(1);
  }

  return ptr;
}