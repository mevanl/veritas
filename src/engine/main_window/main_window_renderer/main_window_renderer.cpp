#include "main_window_renderer.h"


MainWindowRenderer::MainWindowRenderer()
{}

void MainWindowRenderer::create_renderer(SDL_Window* main_window)
{
  main_window_renderer = SDL_CreateRenderer(main_window, -1, SDL_RENDERER_ACCELERATED);
  check_null_ptr(main_window_renderer);
}

MainWindowRenderer::~MainWindowRenderer()
{
  SDL_DestroyRenderer(main_window_renderer);
  main_window_renderer = NULL;
}
