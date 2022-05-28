//
// Created by li on 5/28/22.
//

#include "sequence/seq_demo.h"
#include "adaptor/adaptor_demo.h"

int main(int argc, char* argv[]) {
  /**
   * sequence container
   */
  SeqDemo seq_demo;
  seq_demo.testCommon();
  seq_demo.testVector();
  seq_demo.testDeque();
  seq_demo.testList();
  seq_demo.testForwardList();
  seq_demo.testArray();
  seq_demo.testString();

  /**
   * adaptor container
   */
  AdaptorDemo adaptor_demo;
  adaptor_demo.testStack();
  adaptor_demo.testQueue();
}