#include "lambda_demo.h"

void LambdaDemo::testBasic() {
  auto f = [](auto& word) -> void { std::cout << word << " "; };

  std::vector<std::string> words = {
      "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red",
      "turtle"
  };

  std::for_each(words.cbegin(), words.cend(), f);
  std::cout << std::endl;

  std::sort(words.begin(), words.end(),
            [](const std::string& a, const std::string& b) -> bool {
              return a.size() < b.size();
            }
  );

  std::for_each(words.cbegin(), words.cend(), f);
  std::cout << std::endl;

  size_t threshold = 4;
  auto end_if = std::find_if(words.begin(), words.end(),
                             [threshold](const std::string& s) -> bool {
                               return s.size() > threshold;
                             }
  );
  std::for_each(end_if, words.end(), f);
  std::cout << std::endl;
}

/**
 * value capture
 * reference capture
 * implicit capture
 */
void LambdaDemo::testCapture() {
  auto f = [](const uint64_t& v) -> void { std::cout << v << " "; };

  // value capture
  size_t v1 = 42;
  auto f1 = [v1] { return v1; };
  v1 = 0;
  std::cout << "expect v1=" << v1 << ", actual v1=" << f1() << std::endl;

  // reference capture
  size_t v2 = 42;
  auto f2 = [&v2] { return v2; };
  v2 = 0;
  std::cout << "expect v2=" << v2 << ", actual v2=" << f2() << std::endl;

  // mutable
  size_t v3 = 42;
  auto f3 = [v3]() mutable { return ++v3; };
  v3 = 0;
  std::cout << "expect v3=" << 42 + 1 << ", actual v3=" << f3() << std::endl;

  // implicit capture
  std::vector<uint64_t> vector = {1, 2, 3, 4, 5};
  auto wc1 = std::find_if(vector.begin(), vector.end(),
                          [=](const uint64_t& v) { return v > 3; }
  );
  std::for_each(wc1, vector.end(), f);
  std::cout << std::endl;

  auto wc2 = std::find_if(vector.begin(), vector.end(),
                          [&](const uint64_t& v) { return v > 3; }
  );
  std::for_each(wc2, vector.end(), f);
  std::cout << std::endl;
}