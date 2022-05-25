/**
 * @author 李汶钢6306278
 * @date 2022-05-25 10:49:00
 */
#include "EnumDemo.h"

void EnumDemo::testUnscopedEnum() {
  Color color = kRed;
  std::cout << color << std::endl;
}

void EnumDemo::testScopedEnum() {
  Week week = Week::kMonday;
  std::cout << static_cast<uint8_t>(week) << std::endl;
}