#pragma once
#include <SDL2/SDL.h>
#include "../error/sdl_error_handling.h"



class MainWindow
{
public:
  MainWindow();
  ~MainWindow();
  SDL_Window* window_getter();

private: 
  SDL_Window* main_window = NULL;
  int screen_width = 800;
  int screen_height = 800;
};