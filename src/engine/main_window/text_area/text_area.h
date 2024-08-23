#pragma once 
#include <SDL2/SDL.h>


class TextArea
{
public:
  TextArea();
  ~TextArea();

private:
  SDL_Rect text_viewport; 
};