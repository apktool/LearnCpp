//
// Created by li on 5/28/22.
//

#include "sequence/seq_demo.h"
#include "adaptor/adaptor_demo.h"
#include "associative/ass_demo.h"

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

  /**
   * associative container
   */
  AssDemo ass_demo;
  ass_demo.testMap();
  ass_demo.testMultiMap();
  ass_demo.testUnorderedMap();
  ass_demo.testUnorderedMultiMap();
  ass_demo.testSet();
  ass_demo.testMultiSet();
  ass_demo.testUnorderedSet();
  ass_demo.testUnorderedMultiSet();
}