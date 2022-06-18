#include "derived.h"

class AlphaA : public PublicDerived {
public:
  void exec() {
    PrintPublic();
    PrintProtect();
    // PrintPrivate();
  }
};

class AlphaB : public ProtectedDerived {
public:
  void exec() {
    PrintPublic();
    PrintProtect();
    // PrintPrivate();
  }
};


class AlphaC: public PrivateDerived {
public:
  void exec() {
    // PrintPublic();
    // PrintProtect();
    // PrintPrivate();
  }
};