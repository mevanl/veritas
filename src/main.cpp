#include "engine/engine.hpp"

int main(int argc, char* argv[])
{
  Engine engine(800, 800);
  engine.main_loop();
}