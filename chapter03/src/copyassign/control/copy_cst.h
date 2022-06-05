#include <iostream>
#include <string>

class ClassLikeValue {
 public:
  ClassLikeValue() = default;

  ClassLikeValue(const std::string& s = std::string()) :
      ps(new std::string(s)), i(0) {}

  ClassLikeValue(const ClassLikeValue& p) :
      ps(new std::string(*p.ps)), i(p.i) {}

  ClassLikeValue& operator=(const ClassLikeValue& rhs);

  ~ClassLikeValue();

 public:
  inline std::string getStr() {
    return *ps;
  }

  inline int getI() {
    return i;
  }
 private:
  std::string* ps;
  int i;
};

class ClassLikePoint {
 public:
  ClassLikePoint() = default;

  ClassLikePoint(const std::string& s = std::string()) :
      ps(new std::string(s)), i(0), use(new std::size_t(1)) {}

  ClassLikePoint(const ClassLikePoint& p) :
      ps(p.ps), i(p.i), use(p.use) { ++*use; }

  ClassLikePoint& operator=(const ClassLikePoint& rhs);

  ~ClassLikePoint();
 public:
  inline const std::string& getStr() {
    return *ps;
  }

  inline int getI() {
    return i;
  }

  inline const std::size_t& getUse() {
    return *use;
  }
 private:
  std::string* ps;
  int i;
  std::size_t* use;
};
