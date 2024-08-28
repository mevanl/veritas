#include "veritas.hpp"


void Veritas::main_loop()
{
  bool exit = false;
  SDL_Event event;

  while (!exit)
  { 
    SDL_Delay(50);

    while (SDL_PollEvent(&event) != 0)
    {
      if (event.type == SDL_QUIT || event.window.event == SDL_WINDOWEVENT_CLOSE)
      {
        exit = true;
        break;
      }
    } 
  }
}