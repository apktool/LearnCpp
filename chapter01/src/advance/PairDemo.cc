//
// Created by li on 4/25/22.
//

#include "PairDemo.h"

void PairDemo::testBasic() {
  std::pair<std::string, int> pair1("Tom", 20);
  std::cout << "pair: first " << pair1.first << ", second " << pair1.second
            << std::endl;

  std::pair<std::string, int> pair2 = std::make_pair("Jerry", 18);
  std::cout << "pair: first " << pair2.first << ", second " << pair2.second
            << std::endl;
}
