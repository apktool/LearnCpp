//
// Created by li on 4/16/22.
//

#ifndef CHAPTER01_VIRTUALDEMO_H
#define CHAPTER01_VIRTUALDEMO_H


class VirtualDemo {
 public:
  virtual void say();

  virtual ~VirtualDemo() = 0;
};

class Virtual1 : public VirtualDemo {
 public:
  void say() override;
};

class Virtual2 : public VirtualDemo {
 public:
  void say() override;
};

void virtualFunc(VirtualDemo& demo);

#endif //CHAPTER01_VIRTUALDEMO_H