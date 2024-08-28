#pragma once 
#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include "window/window.hpp"


class Engine
{
public:
  Engine();
  ~Engine();
  void start();
  void main_loop();
  void stop();

private:
  // engine initialization functions, definitions in start.cpp
  void initialize_sdl();

  // error handling functions 
  void check_negative_val(int ret_val);
  void check_null_ptr(void* ptr);

public:

private:
  Window main_window;
};