#include "api.h"


void Api::set_cmdline_args(int argc, char* argv[])
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

Api::Api(int argc, char* argv[])
{
  set_cmdline_args(argc, argv);
  
}

Api::~Api()
{}


void Api::test_sdl()
{
  engine.temp_test_sdl();
}