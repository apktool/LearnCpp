#include "smart_demo.h"

void SmartDemo::testBasic() {
  uint64_t* p1 = new uint64_t(99);
  std::cout << *p1 << std::endl;
  delete p1;
  /*
   * p1 变成了空悬指针(dangling pointer)
   * 即指向一块曾经保存数据对象但现在已经无效的内存指针
   */
  std::cout << *p1 << std::endl;

  p1 = nullptr;
  // std::cout << *p1 << std::endl;
}

void SmartDemo::testShared() {
  std::shared_ptr<int> p1 = std::make_shared<int>(42);
  std::cout << *p1 << std::endl;

  std::shared_ptr<int> p2(new int(23));
  std::cout << *p2 << std::endl;

  std::shared_ptr<std::string> p3 = std::make_shared<std::string>(5, '9');
  std::cout << *p3 << std::endl;

  std::vector<uint64_t> vector1 = {1, 2, 3, 4, 5};
  std::shared_ptr<std::vector<uint64_t>> p4 =
      std::make_shared<std::vector<uint64_t>>(vector1);

  for (uint64_t i = 0; i < p4->size(); ++i) {
    std::cout << (*p4)[i] << " ";
  }
  std::cout << std::endl;

  std::vector<uint64_t>* p5 = new std::vector<uint64_t>{5, 4, 3, 2, 1};
  p4.reset(p5);

  for (auto it = p4->cbegin(); it != p4->cend(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}

void SmartDemo::testUnique() {
  std::unique_ptr<int> p1 = std::make_unique<int>(42);
  std::cout << *p1 << std::endl;

  std::unique_ptr<int> p2(new int(23));
  std::cout << *p2 << std::endl;

  std::unique_ptr<std::string> p3 = std::make_unique<std::string>(5, '9');
  std::cout << *p3 << std::endl;

  std::vector<uint64_t> vector1 = {1, 2, 3, 4, 5};
  std::shared_ptr<std::vector<uint64_t>> p4 =
      std::make_unique<std::vector<uint64_t>>(vector1);

  for (uint64_t i = 0; i < p4->size(); ++i) {
    std::cout << (*p4)[i] << " ";
  }
  std::cout << std::endl;

  std::vector<uint64_t>* p5 = new std::vector<uint64_t>{5, 4, 3, 2, 1};
  p4.reset(p5);

  for (auto it = p4->cbegin(); it != p4->cend(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}

void SmartDemo::testWeak() {
  std::shared_ptr<size_t> p1(new size_t(99));
  std::weak_ptr<size_t> p2(p1);
  std::cout << "use count: " << p2.use_count() << std::endl;
}
