#pragma once
#include <SDL2/SDL.h>
#include "../error/sdl_error_handling.h"


class Main_Window
{
public:
  Main_Window();
  ~Main_Window();
  SDL_Window* window_getter();

private: 
  SDL_Window* main_window = NULL;
  int screen_width = 800;
  int screen_height = 800;
};