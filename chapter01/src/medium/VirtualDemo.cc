//
// Created by li on 4/16/22.
//

#include <iostream>
#include "VirtualDemo.h"

void VirtualDemo::say() {
  std::cout << "virtual demo" << std::endl;
}

VirtualDemo::~VirtualDemo() {
}

void Virtual1::say() {
  std::cout << "virtual 1 demo: " << std::endl;
}

void Virtual2::say() {
  std::cout << "virtual 2 demo" << std::endl;
}

void virtualFunc(VirtualDemo& demo) {
  demo.say();
}