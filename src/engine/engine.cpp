// TODO: 1. Starts SDL
//       2. Creates window
#include "engine.h"

void Engine::start_sdl()
{
  check_negative_val(SDL_Init(SDL_INIT_VIDEO));
}

void Engine::kill_sdl()
{
  SDL_Quit();
}


Engine::Engine()
{
  start_sdl();
}

Engine::~Engine()
{
  kill_sdl();
}

void Engine::temp_test_sdl()
{

  Main_Window main_window_handler;

  SDL_Surface* main_surface = NULL;
  SDL_Surface* hello_world_surface = NULL;

  main_surface = SDL_GetWindowSurface(main_window_handler.window_getter());
  hello_world_surface = SDL_LoadBMP("./hello_world.bmp");
  check_null_ptr(hello_world_surface);

  SDL_BlitSurface(hello_world_surface, NULL, main_surface, NULL);
  SDL_UpdateWindowSurface(main_window_handler.window_getter());

  SDL_Event e; bool quit = false; while( quit == false ){ while( SDL_PollEvent( &e ) ){ if( e.type == SDL_QUIT ) quit = true; } }

  SDL_FreeSurface(hello_world_surface);
  hello_world_surface = NULL;

  
}