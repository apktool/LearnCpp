#include "regex_test.h"

void RegexTest::testBasic() {
  std::string str = "hello 0971-110 world";

  std::regex r("(\\d+)");

  // 将一个字符序列与一个正则表达式匹配
  std::cout << "-> regex_match" << std::endl;
  std::smatch result1;
  if (std::regex_match(str, result1, r)) {
    for (auto iter = result1.begin(); iter != result1.end(); iter++) {
      std::cout << *iter << std::endl;
    }
  }

  // 寻找第一个与正则表达式匹配的子序列
  std::cout << "-> regex_search" << std::endl;
  std::smatch result2;
  if (std::regex_search(str, result2, r)) {
    for (size_t i = 0; i < result2.size(); i++) {
      std::ssub_match sub_match = result2[i];
      std::cout << sub_match.str() << std::endl;
    }
  }

  // 迭代器适配器，调用regex_search来遍历一个string中所有匹配的子串
  std::cout << "-> sregex_iterator" << std::endl;
  for (std::sregex_iterator it(str.begin(), str.end(), r), end_it; it != end_it; it++) {
    std::cout << it->str() << std::endl;
  }

  // 使用给定格式替换一个正则表达式
  std::cout << "-> regex_replace" << std::endl;
  std::string res = std::regex_replace(str, r, "o");
  std::cout << res << std::endl;
}
