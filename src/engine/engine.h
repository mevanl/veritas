#pragma once
#include <SDL2/SDL.h>
#include "error/sdl_error_handling.h"
#include "window/main_window.h"


class Engine
{
public:
  // Engine will be called on stack,
  // these will start and stop the engine
  Engine();
  ~Engine();
  void main_loop(); // defined in its own file: main_loop.cpp

private:
  Main_Window* main_window;
};
