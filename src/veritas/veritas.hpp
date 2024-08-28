#include "../engine/engine.hpp"


class Veritas
{
public:
  Veritas(int screen_width, int screen_height);
  ~Veritas();
  void run();

private:
  void stop();

private:
  Engine engine;
};