#pragma once 
#include <SDL2/SDL.h>
#include "../../error/sdl_error_handling.h"


class MainWindowRenderer
{
public:
  MainWindowRenderer();
  ~MainWindowRenderer();
  void create_renderer(SDL_Window* main_window);

private:
  SDL_Renderer* main_window_renderer = NULL; 
};