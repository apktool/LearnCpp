#include "base.h"

class PublicDerived : public Base {
public:
  void test() {
    PrintPublic();
    PrintProtect();
    // PrintPrivate();
  }
};

class ProtectedDerived : protected Base {
public:
  void test() {
    PrintPublic();
    PrintProtect();
    // PrintPrivate();
  }
};

class PrivateDerived : private Base {
public:
  void test() {
    PrintPublic();
    PrintProtect();
    // PrintPrivate();
  }
};
