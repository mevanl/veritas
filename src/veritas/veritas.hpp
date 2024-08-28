#pragma once
#include "../engine/engine.hpp"


class Veritas
{
public:
  Veritas();
  ~Veritas();
  void start();

private:
  void stop();

private:
  Engine engine;
};