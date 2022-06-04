#include "point/smart_demo.h"
#include "array/dyn_demo.h"
#include "allocator/alloc_demo.h"

int main(int argc, char* argv[]) {
  /**
   * smart point
   */
  SmartDemo smart_demo;
  smart_demo.testBasic();
  smart_demo.testShared();
  smart_demo.testUnique();
  smart_demo.testWeak();

  /**
   * dynamic memory
   */
  DynDemo dyn_demo;
  dyn_demo.testBasic();
  dyn_demo.testMedium();

  /**
   * allocator
   */
  AllocDemo alloc_demo;
  alloc_demo.testBasic();
  alloc_demo.testMedium();

  return 0;
}