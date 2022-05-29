// #pragma once
// Created by li on 2022-05-28.
#include "string_demo.h"

void StringDemo::testBase() {
  std::string s1 = "Hello world";
  std::istringstream is(s1);
  std::cout << "s1: " << s1 << std::endl;

  std::string s2;
  while (!is.eof()) {
    std::string tmp;
    is >> tmp;
    s2 += tmp;
  }

  std::cout << "s2: " << s2 << std::endl;

  // ----------------------------------

  std::ostringstream os;
  os << "Hello C++";
  os << "Hello Go";
  std::string s3 = os.str();

  std::cout << "s3: " << s3 << std::endl;
}
