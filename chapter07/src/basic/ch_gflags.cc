#include <iostream>
#include <gflags/gflags.h>

DEFINE_string(host, "127.0.0.1", "the server host");
DEFINE_int32(port, 12306, "the server port");


int main(int argc, char* argv[]) {
  char ch1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  std::cout << ch1 << std::endl;

  char ch2[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
  std::cout << ch2<< std::endl;

  // const char *ch3 =  {'h', 'e', 'l', 'l', 'o'};
  // std::cout << ch3 << std::endl;

  char* ch4 = ch1;
  std::cout << ch4 << std::endl;
  std::cout << *ch4 << std::endl;

  const char* ch5 = "hello";
  std::cout << ch5 << ":" << *ch5 << std::endl;

  const char* ch6[] = {"hello", "word"};
  for (int i = 0; i < 2; i++) {
    std::cout << ch6[i] << ":"<<*ch6[i] << std::endl;
  }

  gflags::ParseCommandLineFlags(&argc, &argv, true);
  std::cout << "The server host is: " << FLAGS_host
    << ", the server port is: " << FLAGS_port << std::endl;
  return 0;
}