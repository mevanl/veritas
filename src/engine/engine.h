#include <SDL2/SDL.h>
#include "sdl_error_handling.h"
#include "main_window.h"


class Engine
{
public:

  // Engine will be called on stack,
  // these will start and stop the engine
  Engine();
  ~Engine();
  void temp_test_sdl();

private:
  void start_sdl();
  void kill_sdl();

};
