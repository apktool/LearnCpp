//
// Created by li on 4/26/22.
//

#include "AppAlgorithm.h"

int main(int argc, char *argv[]) {
    /**
     * for_each
     * transform
     */
    std::cout << "TraverseDemo" << std::endl;
    TraverseDemo traverseDemo;
    traverseDemo.testForEach();
    traverseDemo.testTransform();

    /**
     * find
     */
    std::cout << "FindDemo" << std::endl;
    FindDemo findDemo;
    findDemo.testFind();
    findDemo.testFindIf();
    findDemo.testAdjacentFind();
    findDemo.testBinarySearch();

    /**
     * agg
     */
    std::cout << "AggDemo" << std::endl;
    AggDemo aggDemo;
    aggDemo.testCount();
    aggDemo.testCountIf();

    /**
     * sort
     */
    std::cout << "SortDemo" << std::endl;
    SortDemo sortDemo;
    sortDemo.testSort();
    sortDemo.testRandomShuffle();
    sortDemo.testMerge();
    sortDemo.testReverse();

    /**
     * copy, replace, replace_if
     */
    std::cout << "ReplaceDemo" << std::endl;
    ReplaceDemo replaceDemo;
    replaceDemo.testCopy();
    replaceDemo.testReplace();
    replaceDemo.testReplaceIf();
    replaceDemo.testSwap();

    /**
     * accumulate, fill
     */
    std::cout << "ArithmeticDemo" << std::endl;
    ArithmeticDemo arithmeticDemo;
    arithmeticDemo.testAccumulate();
    arithmeticDemo.testFill();

    /**
     *
     */
    std::cout << "CollectionDemo" << std::endl;
    CollectionDemo collectionDemo;
    collectionDemo.testIntersection();
    collectionDemo.testUnion();
    collectionDemo.testDifference();
}