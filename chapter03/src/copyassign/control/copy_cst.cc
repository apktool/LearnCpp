#include "copy_cst.h"

ClassLikeValue& ClassLikeValue::operator=(const ClassLikeValue& rhs) {
  auto newp = new std::string(*rhs.ps);
  delete ps;

  ps = newp;
  i = rhs.i;
  return *this;
}

ClassLikeValue::~ClassLikeValue() {
  delete ps;
}

ClassLikePoint& ClassLikePoint::operator=(const ClassLikePoint& rhs) {
  ++*rhs.use;
  if (--*use == 0) {
    delete ps;
    delete use;
  }

  ps = rhs.ps;
  i = rhs.i;
  use = rhs.use;

  return *this;
}

ClassLikePoint::~ClassLikePoint() {
  if (--*use == 0) {
    delete ps;
    delete use;
  }
}
