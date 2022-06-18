#include <iostream>

// 间接基类A
class AI {
 public:
  int GetMa() {
    return m_a;
  }

 protected:
  int m_a;
};

// 直接基类B
class BI : virtual public AI {  // 虚继承
 protected:
  int m_b;
};

// 直接基类C
class CI : virtual public AI {  // 虚继承
 protected:
  int m_c;
};

// 派生类D
class DI : public BI, public CI {
 public:
  void seta(int a) {
    m_a = a;
  }

  void setb(int b) {
    m_b = b;
  }

  void setc(int c) {
    m_c = c;
  }

  void setd(int d) {
    m_d = d;
  }

 private:
  int m_d;
};