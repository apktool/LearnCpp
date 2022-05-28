//
// Created by li on 5/28/22.
//
#include "iostream/io_demo.h"
#include "fstream/file_demo.h"
#include "stringstream/string_demo.h"

int main(int argc, char* argv[]) {
  /**
   * iostream
   */
  IoDemo io_demo;
  io_demo.testBasic();
  io_demo.testState();
  io_demo.testBuffer();

  /**
   * fstream
   */
  FileDemo file_demo;
  file_demo.testBase();

  /**
   * stringstream
   */
  StringDemo string_demo;
  string_demo.testBase();
}
