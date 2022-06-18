#include "random_test.h"

void RandomTest::testBasic() {
  std::default_random_engine e(static_cast<unsigned>(time(nullptr)));
  std::cout << "e.min() = " << e.min() << std::endl;
  std::cout << "e.max() = " << e.max() << std::endl;

  std::uniform_int_distribution<unsigned> u(0, 100);
  std::cout << "整型均匀分布：0~100" << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << u(e) << " " << std::ends;
  }
  std::cout << "\n浮点型均匀分布：0~1" << std::endl;
  std::uniform_real_distribution<double> ur(0, 1);
  for (int i = 0; i < 10; ++i) {
    std::cout << ur(e) << " " << std::ends;
  }
  std::cout << std::endl;
}

void RandomTest::testNormal() {
  std::default_random_engine e(static_cast<unsigned>(time(nullptr)));
  std::normal_distribution<> n(4, 1.5);  // 正态分布n,均值为4，标准差为1.5
  std::vector<unsigned> vec(9);          // 9个0
  for (int i = 0; i < 200; ++i) {
    unsigned v = lround(n(e));  // 此处数学描述应为：n(e)服从正态分布N(4,2.25)。
    if (v < vec.size()) {
      ++vec[v];
    }
  }
  for (int i = 0; i < vec.size(); ++i) {
    std::cout << i << ":" << std::string(vec[i], '*') << std::endl;
  }
}

void RandomTest::testBerno() {
  std::default_random_engine e(static_cast<unsigned>(time(nullptr)));
  std::bernoulli_distribution b(0.6);  // 普通类，而非模板类
  std::vector<unsigned> vec(2);
  for (int i = 0; i < 1000; ++i) {
    ++vec[b(e)];
  }
  std::cout << "0 出现次数：" << vec[0] << std::endl;
  std::cout << "1 出现次数：" << vec[1] << std::endl;
}
