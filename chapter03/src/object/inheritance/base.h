#include <iostream>

class Base {
public:
  void PrintPublic();

protected:
  void PrintProtect();

private:
  void printPrivate();

private:
  uint64_t mem_ = 0;
};
