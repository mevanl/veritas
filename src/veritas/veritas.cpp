#include "veritas.hpp"


Veritas::Veritas()
{}

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