// #pragma once
// Created by li on 2022-05-28.
#include "file_demo.h"

void FileDemo::testBase() {
  std::string str = "";

  std::string f1 = "/tmp/a.out";
  std::ifstream in(f1);
  if (in.is_open()) {
    while (!in.eof()) {
      std::string tmp;
      getline(in, tmp);
      str += tmp;
    }
  }
  in.close();

  std::string f2 = f1 + ".bak";
  std::ofstream out(f2, std::ofstream::out | std::ofstream::app);
  if (out.is_open()) {
    out << str;
  }
  out.close();
}
