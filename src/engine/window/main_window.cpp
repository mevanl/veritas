#include "main_window.h"


SDL_Window* Main_Window::window_getter()
{
  return main_window;
}

Main_Window::Main_Window()
{
  main_window = SDL_CreateWindow("Veritas", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);
  check_null_ptr(main_window);
}

Main_Window::~Main_Window()
{
  SDL_DestroyWindow(main_window);
}

