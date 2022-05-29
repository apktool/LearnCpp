#include "bind_demo.h"

void BindDemo::testBind() {
  auto _1 = std::placeholders::_1;
  auto _2 = std::placeholders::_2;
  auto _3 = std::placeholders::_3;
  auto _4 = std::placeholders::_4;

  auto lambda = [](std::string pre, char o, int rep, std::string post) {
    std::cout << pre;
    while (rep-- > 0) {
      std::cout << o;
    }
    std::cout << post << std::endl;
  };

  // binding the lambda:
  std::function<void(std::string, char, int, std::string)> f =
      std::bind(&decltype(lambda)::operator(), &lambda, _1, _2, _3, _4);

  f("G", 'o', 'o' - 'g', "gol");
}
