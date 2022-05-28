// #pragma once
// Created by li on 2022-05-28.
#include "io_demo.h"

void IoDemo::testBasic() {
  std::string s1;
  std::cin >> s1;
  std::cout << s1 << std::endl;

  std::string s2;
  while (std::cin >> s2) {
    if (s2 == "quit") {
      break;
    }
    std::cout << s2 << " " << std::endl;
  }
}

void IoDemo::testState() {
  auto old_state = std::cin.rdstate();
  std::cout << old_state << std::endl;

  std::cin.clear(std::cin.rdstate() & ~std::cin.failbit & ~std::cin.badbit);

  std::string s1;
  std::cin >> s1;
  std::cout << s1 << std::endl;
  std::cout << std::cin.rdstate() << std::endl;

  std::cin.setstate(old_state);
}

void IoDemo::testBuffer() {
  std::cout << "hello C++";;
  std::cout << std::endl;

  std::cout << "hello Java" << std::flush;
  std::cout << std::endl;

  std::cout << "hello Go" << std::ends;
  std::cout << std::endl;
}
