#pragma once 
#include <SDL2/SDL.h>
#include "../error/sdl_error_handling.h"

class Renderer
{
public:
  Renderer();
  ~Renderer();
  void create_renderer(SDL_Window* main_window);

private:
  SDL_Renderer* renderer = NULL; 
};