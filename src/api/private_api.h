#include "../engine/engine.h"


class PrivateApi
{

public:
  PrivateApi(int argc, char* argv[]);
  ~PrivateApi();

private:
  int num_cmdline_args;
  char** cmdline_args;

  Engine engine;

private:
  void set_cmdline_args(int argc, char* argv[]);
  void create_main_window();
  
};