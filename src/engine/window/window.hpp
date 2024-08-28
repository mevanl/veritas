#pragma once
#include <SDL2/SDL.h>
#include <iostream>
#include <string>


class Window
{
public:
  Window();
  ~Window();

  void set_dimensions(int width, int height);
  int get_width();
  int get_height();
  bool is_fullscreen();
  bool is_minimized();
  bool has_keyboard_focus();

  void start();
  void stop();

private:
  // sdl error handling functions 
  void check_negative_val(int ret_val);
  void check_null_ptr(void* ptr);

  void create_window_and_renderer();

public:
  std::string window_name = "default";

private:
  SDL_Window* window = NULL;
  SDL_Renderer* renderer = NULL;
  int window_width;
  int window_height;
  bool fullscreen;
  bool minimized;
  bool keyboard_focus;
};

// Some window event handler function will be implemented eventually 