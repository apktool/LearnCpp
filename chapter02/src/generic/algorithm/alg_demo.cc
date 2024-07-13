#include <cstdint>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include "alg_demo.h"

void AlgoDemo::testFind() {
  uint64_t target = 9;
  std::vector<uint64_t> vector = {1, 3, 5, 7, 9, 2, 4, 6, 8};
  auto iter = std::find(vector.cbegin(), vector.cend(), target);
  std::cout << "The value " << target <<
            (iter == vector.end() ? " is not present" : " is present")
            << std::endl;
}

void AlgoDemo::testAccumulate() {
  std::vector<uint64_t> vector1 = {1, 3, 5, 7, 9, 2, 4, 6, 8};
  uint64_t sum1 = std::accumulate(vector1.cbegin(), vector1.cend(), 0);
  std::cout << sum1 << std::endl;

  std::vector<std::string> vector2 = {"1", "2", "3", "4", "5"};
  std::string
      sum2 = std::accumulate(vector2.cbegin(), vector2.cend(), std::string(""));
  std::cout << sum2 << std::endl;
}

void AlgoDemo::testEqual() {
  std::vector<uint64_t> vector1 = {1, 3, 5, 7, 9};
  std::vector<uint64_t> vector2 = {2, 4, 6, 8, 10};

  bool res1 = std::equal(vector1.cbegin(), vector1.cend(), vector2.cbegin());
  std::cout << res1 << std::endl;
}

void AlgoDemo::testFill() {
  std::vector<uint64_t> vector1 = {1, 2, 3};
  // the second param is error, it should be size of vector1 (just is 3).
  // it should be noted, no exception will be thrown using this code.
  std::fill_n(vector1.begin(), 10, 0);
  std::for_each(vector1.begin(),
                vector1.end(),
                [](uint64_t i) -> void { std::cout << i << " "; }
  );
  std::cout << std::endl;
}

void AlgoDemo::testCopy() {
  int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int arr2[sizeof(arr1) / sizeof(*arr1)];
  std::copy(std::begin(arr1), std::end(arr1), arr2);
  for (const auto& item : arr2) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

void AlgoDemo::testSort() {
  auto f = [](auto& word) -> void { std::cout << word << " "; };

  std::vector<std::string> words = {
      "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
  };
  std::for_each(words.cbegin(), words.cend(), f);
  std::cout << std::endl;

  std::sort(words.begin(), words.end());

  auto end_unique = std::unique(words.begin(), words.end());
  words.erase(end_unique, words.end());

  std::for_each(words.cbegin(), words.cend(), f);
  std::cout << std::endl;
}
