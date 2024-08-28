#include "veritas.hpp"


Veritas::Veritas(int screen_width, int screen_height)
{
  engine.m_screen_width = screen_width;
  engine.m_screen_height = screen_height;
  engine.m_main_window_name = "Veritas";
}

Veritas::~Veritas()
{}

void Veritas::run()
{
  engine.start();
  engine.main_loop();
  engine.stop();
}

void Veritas::stop()
{}