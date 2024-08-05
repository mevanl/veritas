#pragma once
#include "../../engine/engine.h"


class EngineApi
{
public:
  EngineApi();
  ~EngineApi();
  void receive_cmdline_args(int argc, char* argv[]);

private:
  int num_cmdline_args;
  char** cmdline_args;
  Engine engine;
};