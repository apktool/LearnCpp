#pragma once

#include <iostream>
#include <string>
#include <cstdint>

namespace dt {
class Database {
 public:
  Database() = default;

  std::uint64_t id;
  std::string name;
};
}