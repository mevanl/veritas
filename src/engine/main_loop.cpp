#include "engine.hpp"


void Engine::main_loop()
{
  int exit = 0;
  SDL_Event event;

  while (!exit)
  {
    SDL_Delay(50);
    while (SDL_PollEvent(&event) != 0)
    {
      if (event.type == SDL_QUIT)
      {
        exit = 1; 
      }
    }
  }
}