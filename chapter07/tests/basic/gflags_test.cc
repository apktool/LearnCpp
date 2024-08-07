#include <iostream>
#include <gflags/gflags.h>

DEFINE_string(host, "127.0.0.1", "the server host");
DEFINE_int32(port, 12306, "the server port");


int main(int argc, char* argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  std::cout << "The server host is: " << FLAGS_host
    << ", the server port is: " << FLAGS_port << std::endl;
  return 0;
}