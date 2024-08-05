#include "user_api.h"


void UserApi::send_cmdline_args(int argc, char* argv[])
{
  UserApi::engine_api.receive_cmdline_args(argc, argv);
}

UserApi::UserApi(int argc, char* argv[])
{
  UserApi::send_cmdline_args(argc, argv);
}

UserApi::~UserApi()
{}


