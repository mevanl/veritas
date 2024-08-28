#include "engine.hpp"


Engine::Engine()
{}

Engine::~Engine()
{}

void Engine::set_main_window_name(std::string name)
{
  main_window.window_name = name;
}

void Engine::set_main_window_dimensions(int width, int height)
{
  main_window.set_dimensions(width, height);
}