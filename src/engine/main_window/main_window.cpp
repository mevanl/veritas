#include "main_window.h"


void MainWindow::initialize_renderer()
{
  main_window_renderer.create_renderer(main_window);
}

MainWindow::MainWindow()
{
  main_window = SDL_CreateWindow("Veritas", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);
  check_null_ptr(main_window);

  initialize_renderer();
}

MainWindow::~MainWindow()
{
  SDL_DestroyWindow(main_window);
}

SDL_Window* MainWindow::window_getter()
{
  return main_window;
}