#include <SDL2/SDL.h>
#include "engine/sdl_error_handling.h"

int main()
{

  check_negative_val(SDL_Init(SDL_INIT_VIDEO));

  SDL_Quit();

  return 0;
}
