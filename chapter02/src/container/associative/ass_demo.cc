#include "ass_demo.h"

void AssDemo::testMap() {
  std::map<std::string, size_t> map;
  map["c"] = 3;
  map.insert(std::make_pair<std::string, size_t>("b", 2));
  map.insert({"a", 1});

  auto f = [](std::pair<std::string, size_t> v) -> void {
    std::cout << "key: " << v.first << " value: " << v.second << std::endl;
  };
  std::for_each(map.begin(), map.end(), f);
  std::cout << std::endl;

  map.erase("c");
  std::for_each(map.begin(), map.end(), f);
  std::cout << std::endl;
}

void AssDemo::testMultiMap() {
  std::multimap<std::string, size_t> multimap;
  multimap.insert({"a", 1});
  multimap.insert({"a", 2});
  multimap.insert({"b", 3});

  // -------------

  auto f = [](std::pair<std::string, size_t> v) -> void {
    std::cout << "key: " << v.first << " value: " << v.second << std::endl;
  };
  std::for_each(multimap.begin(), multimap.end(), f);
  std::cout << std::endl;

  for (auto beg = multimap.lower_bound("a"),
           end = multimap.upper_bound("a");
       beg != end;
       beg++
      ) {
    std::cout << "key: " << beg->first
              << " value: " << beg->second
              << std::endl;
  }

  // -------------

  for (auto pos = multimap.equal_range("a");
       pos.first != pos.second;
       pos.first++) {
    std::cout << "key: " << pos.first->first
              << " value: " << pos.first->second
              << std::endl;

  }
}

void AssDemo::testUnorderedMap() {
  std::unordered_map<std::string, size_t> unordered_map;
  unordered_map["c"] = 3;
  unordered_map.insert({"b", 2});
  unordered_map.insert(std::make_pair<std::string, size_t>("a", 1));

  auto f = [](std::pair<std::string, size_t> v) -> void {
    std::cout << "key: " << v.first << " value: " << v.second << std::endl;
  };
  std::for_each(unordered_map.begin(), unordered_map.end(), f);
  std::cout << std::endl;
}

void AssDemo::testUnorderedMultiMap() {
  std::unordered_multimap<std::string, size_t> unordered_multimap;
  unordered_multimap.insert({"a", 1});
  unordered_multimap.insert({"a", 2});
  unordered_multimap.insert({"b", 3});

  for (auto pos = unordered_multimap.equal_range("a");
       pos.first != pos.second;
       pos.first++) {
    std::cout << "key: " << pos.first->first
              << " value: " << pos.first->second
              << std::endl;

  }
}

void AssDemo::testSet() {
  auto f = [](auto& v) -> void { std::cout << v << " "; };

  std::set<std::string> sets = {"a"};
  sets.insert("a");
  sets.insert("b");

  std::for_each(sets.cbegin(), sets.cend(), f);
  std::cout << std::endl;
}

void AssDemo::testMultiSet() {
  auto f = [](auto& v) -> void { std::cout << v << " "; };

  std::multiset<std::string> multiset = {"a"};
  multiset.insert("a");
  multiset.insert("b");

  std::for_each(multiset.cbegin(), multiset.cend(), f);
  std::cout << std::endl;
}

void AssDemo::testUnorderedSet() {
  auto f = [](auto& v) -> void { std::cout << v << " "; };

  std::unordered_set<std::string> unordered_set = {"a"};
  unordered_set.insert("a");
  unordered_set.insert("b");

  std::for_each(unordered_set.cbegin(), unordered_set.cend(), f);
  std::cout << std::endl;
}

void AssDemo::testUnorderedMultiSet() {
  auto f = [](auto& v) -> void { std::cout << v << " "; };

  std::unordered_multiset<std::string> unordered_multiset = {"a"};
  unordered_multiset.insert("a");
  unordered_multiset.insert("b");

  std::for_each(unordered_multiset.cbegin(), unordered_multiset.cend(), f);
  std::cout << std::endl;
}
