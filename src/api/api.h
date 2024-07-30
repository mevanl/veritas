#include "../engine/engine.h"


class Api
{

public:
  Api(int argc, char* argv[]);
  ~Api();

private:
  int num_cmdline_args;
  char** cmdline_args;

  Engine engine;

private:
  void set_cmdline_args(int argc, char* argv[]);
};