#include "veritas/veritas.hpp"


int main(int argc, char* argv[])
{
  Veritas veritas;
  veritas.start();
  veritas.main_loop();

  return 0;
}