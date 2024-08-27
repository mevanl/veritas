#include "engine.hpp"


Engine::Engine(int initial_screen_width, int initial_screen_height)
{
  p_screen_width = initial_screen_width;
  p_screen_height = initial_screen_height;

  start();
}

Engine::~Engine()
{
  stop();
}

