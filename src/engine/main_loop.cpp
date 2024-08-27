#include "engine.hpp"


void Engine::main_loop()
{
  bool exit = false;
  SDL_Event event;

  while (!exit)
  { 
    while (SDL_PollEvent(&event) != 0)
    {
      if (event.type == SDL_QUIT)
      {
        exit = true;
      }
    }

    SDL_Delay(50); 
  }
}