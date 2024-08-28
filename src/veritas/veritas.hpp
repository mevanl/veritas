#pragma once
#include "../engine/engine.hpp"


class Veritas
{
public:
  Veritas();
  ~Veritas();
  void start();
  void main_loop();

private:
  void stop();
  

private:
  Engine engine;
};