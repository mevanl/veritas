#include "engine_api.h"


void EngineApi::receive_cmdline_args(int argc, char* argv[])
{
  if ( argc - 1 == 0 )
  {
    num_cmdline_args = 0;
    cmdline_args = NULL;

    return;
  }

  num_cmdline_args = argc - 1;
  cmdline_args = argv;
}

EngineApi::EngineApi()
{}

EngineApi::~EngineApi()
{}

