#include <SDL2/SDL.h>
#include <iostream>

void check_negative_val(int ret_val)
{
  if (ret_val < 0)
  {
    std::cout << "SDL ERROR: " << SDL_GetError() << std::endl;
    exit(1);
  }
}


void* check_null_ptr(void *ptr)
{
  if (ptr == NULL)
  {
    std::cout << "SDL ERROR: " << SDL_GetError() << std::endl;
    exit(1);
  }

  return ptr;
}
