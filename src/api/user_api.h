#pragma once
#include "engine_api/engine_api.h"


class UserApi
{
public:
  UserApi(int argc, char* argv[]);
  ~UserApi();
 
private:
  EngineApi engine_api;
  void send_cmdline_args(int argc, char* argv[]);
};