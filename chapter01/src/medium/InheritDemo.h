//
// Created by li on 4/16/22.
//

#ifndef CHAPTER01_INHERITDEMO_H
#define CHAPTER01_INHERITDEMO_H

#include <iostream>
#include <string>

using std::string;

class InheritDemo {
 public:
  InheritDemo();

  InheritDemo(const string& publicString,
              const string& protectedString,
              const string& privateString);

  string publicString;

  void say();

 protected:
  string protectedString;
 private:
  string privateString;
};

class Inherit1 : virtual public InheritDemo {
 public:
  Inherit1();

  Inherit1(const string& publicString,
           const string& protectedString,
           const string& privateString);
};

class Inherit2 : virtual public InheritDemo {
 public:
  Inherit2();

  Inherit2(const string& publicString,
           const string& protectedString,
           const string& privateString);
};

class Inherit : public Inherit1, public Inherit2 {
 public:
  Inherit();
};

#endif //CHAPTER01_INHERITDEMO_H
