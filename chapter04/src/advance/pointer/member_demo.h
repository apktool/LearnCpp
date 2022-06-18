#include <iostream>

class MemberDemo {
 public:
  MemberDemo(int i) {
    a = i;
  };

  int Fun(int b) {
    return ((a * c) + b);
  };

  int c;

 private:
  int a;
};