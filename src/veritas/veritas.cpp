#include "veritas.hpp"


Veritas::Veritas()
{
  engine.set_main_window_name("Veritas");
  engine.set_main_window_dimensions(800, 800);
}

Veritas::~Veritas()
{}

void Veritas::start()
{
  engine.start();
  engine.main_loop();
  engine.stop();
}

void Veritas::stop()
{}