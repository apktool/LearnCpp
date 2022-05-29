#pragma once

#include "gtest/gtest.h"
#include "entity/database.h"

namespace dt {
class MockDatabase {
 public:
  class Builder {
   public:
    Builder* SetId(uint64_t id) {
      this->id_ = id;
      return this;
    }

    Builder* SetName(std::string name) {
      this->name_ = name;
      return this;
    }

    MockDatabase Build() {
      return MockDatabase(id_, name_);
    }
   private:
    uint64_t id_;
    std::string name_;
  };

 public:
  MockDatabase() = default;

  MockDatabase(uint64_t id, const std::string& name) :
      id_(id), name_(name) {}

  uint64_t id_;
  std::string name_;
};
}