#pragma once

#include <iostream>
#include <gtest/gtest.h>
#include "entity/table.h"

namespace dt {
class MockTable {
 public:
  class Builder {
   public:
    Builder* SetId(uint64_t id) {
      id_ = id;
      return this;
    }

    Builder* SetName(std::string name) {
      name_ = name;
      return this;
    }

    MockTable Build() {
      return MockTable(id_, name_);
    }
   private:
    uint64_t id_;
    std::string name_;
  };

 public:
  MockTable() = default;

  MockTable(uint64_t id, const std::string& name) :
      id_(id), name_(name) {}

  uint64_t id_;
  std::string name_;
};
}