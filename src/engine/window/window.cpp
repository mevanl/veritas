#include "window.hpp"


Window::Window()
{}

Window::~Window()
{
  stop();
}

void Window::set_dimensions(int width, int height)
{
  window_width = width;
  window_height = height;
}

int Window::get_width()
{
  return window_width;
}

int Window::get_height()
{
  return window_height;
}

bool Window::is_fullscreen()
{
  return fullscreen;
}

bool Window::is_minimized()
{
  return minimized;
}

bool Window::has_keyboard_focus()
{
  return keyboard_focus;
}