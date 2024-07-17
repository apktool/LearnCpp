#include <iostream>

namespace basic {
void show_point() {
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
  std::cout << ch5 << "|" << *ch5 << std::endl;

  const char* ch6[] = {"hello", "word"};
  for (int i = 0; i < 2; i++) {
    std::cout << ch6[i] << ":"<<*ch6[i] <<std::endl;
  }
  std::cout << ch6 << ":" << *ch6 << std::endl;
  std::cout << *ch6+1 << ":" << *(ch6+1) << std::endl;
}
}
