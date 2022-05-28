#pragma once

#include <iostream>
#include <string>

namespace dt {
class Database {
 public:
  Database() = default;

  std::uint64_t id;
  std::string name;
};
}