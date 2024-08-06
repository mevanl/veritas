#include "main_window.h"


MainWindow::MainWindow()
{
  main_window = SDL_CreateWindow("Veritas", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);
  check_null_ptr(main_window);
}

MainWindow::~MainWindow()
{
  SDL_DestroyWindow(main_window);
}

SDL_Window* MainWindow::window_getter()
{
  return main_window;
}