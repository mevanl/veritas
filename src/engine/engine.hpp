#pragma once 
#include <SDL2/SDL.h>
#include <iostream>


class Engine
{
public:
  Engine(int screen_width, int screen_height);
  ~Engine();
  void main_loop();

private:
  // engine initialization functions, definitions in start.cpp
  void start();
  void initialize_sdl();
  void create_main_window();
  void create_renderer();

  void stop();

  // error handling functions 
  void check_negative_val(int ret_val);
  void* check_null_ptr(void* ptr);

private:
  int p_screen_width = 0;
  int p_screen_height = 0;
  SDL_Window* main_window;
  SDL_Renderer* renderer;
};