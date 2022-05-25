/**
 * @author 李汶钢6306278
 * @date 2022-05-25 10:49:00
 */

#include "iostream"

// Unscoped enumerations
enum Color : uint8_t {
    kRed = 0,
    kBlue,
    kYellow
};

// Scoped enumerations
enum struct Week : uint8_t {
    kMonday = 1,
    kTuesday
};

class EnumDemo {
 public:
  void testUnscopedEnum();

  void testScopedEnum();
};