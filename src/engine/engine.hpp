#pragma once 
#include <SDL2/SDL.h>
#include <iostream>
#include <string>


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
  void create_main_window();
  void create_main_window_renderer();


  // error handling functions 
  void check_negative_val(int ret_val);
  void* check_null_ptr(void* ptr);

public:
  int m_screen_width = 0;
  int m_screen_height = 0;
  std::string m_main_window_name = "default";

private:
  SDL_Window* main_window;
  SDL_Renderer* main_window_renderer;
};