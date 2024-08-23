#include "user_api/user_api.h"


int main(int argc, char* argv[])
{
  UserApi api(argc, argv);
  api.start_veritas();

  return 0;
}
