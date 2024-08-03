#include "private_api.h"


void PrivateApi::set_cmdline_args(int argc, char* argv[])
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

PrivateApi::PrivateApi(int argc, char* argv[])
{
  set_cmdline_args(argc, argv);
  
}

PrivateApi::~PrivateApi()
{}