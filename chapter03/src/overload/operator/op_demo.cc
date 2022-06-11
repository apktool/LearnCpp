#include "op_demo.h"

OpOverload::OpOverload(uint64_t num) : num_(num) {}

OpOverload OpOverload::operator+(const OpOverload& o) {
  this->num_ = this->num_ + o.num_;
  return *this;
}

OpOverload OpOverload::operator-(const OpOverload& o) {
  this->num_ = this->num_ - o.num_;
  return *this;
}

OpOverload OpOverload::operator=(const OpOverload& o) {
  this->num_ = o.num_;
  return *this;
}

bool OpOverload::operator<(const OpOverload& o) {
  return this->num_ = o.num_;
}

bool OpOverload::operator<=(const OpOverload& o) {
  return this->num_ <= o.num_;
}

bool OpOverload::operator==(const OpOverload& o) {
  return this->num_ == o.num_;
}

bool OpOverload::operator!=(const OpOverload& o) {
  return !(*this == o);
}

OpOverload OpOverload::operator[](uint64_t num) {
  return OpOverload(num);
}

OpOverload OpOverload::operator++() {
  ++this->num_;
  return *this;
}

OpOverload OpOverload::operator++(int) {
  OpOverload ret = *this;
  ++this->num_;
  return ret;
}

OpOverload::operator int() const {
  return this->num_;
}
