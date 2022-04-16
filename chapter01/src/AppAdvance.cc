//
// Created by li on 4/16/22.
//

#include "AppAdvance.h"

int main(int argc, char *argv[]) {
    /**
     * pair
     */
    std::cout << "PairDemo" << std::endl;
    PairDemo pairDemo;
    pairDemo.testBasic();

    /**
     * functional
     */
    std::cout << "FunctionalDemo" << std::endl;
    FunctionalDemo functionalDemo;
    functionalDemo.testBasic();
    functionalDemo.testMedium();

    /**
     * string
     */
    std::cout << "StringDemo" << std::endl;
    StringDemo stringDemo;
    stringDemo.testBasic();
    stringDemo.testMedium();

    /**
     * vector
     */
    std::cout << "VectorDemo" << std::endl;
    VectorDemo vectorDemo;
    vectorDemo.testBasic();
    vectorDemo.testMedium();

    /**
     * deque
     */
    std::cout << "DequeDemo" << std::endl;
    DequeDemo dequeDemo;
    dequeDemo.testBasic();
    dequeDemo.testMedium();

    /**
     * stack
     */
    std::cout << "StackDemo" << std::endl;
    StackDemo stackDemo;
    stackDemo.testBasic();

    /**
     * queue
     */
    std::cout << "QueueDemo" << std::endl;
    QueueDemo queueDemo;
    queueDemo.testBasic();

    /**
     * list
     */
    std::cout << "ListDemo" << std::endl;
    ListDemo listDemo;
    listDemo.testBasic();
    listDemo.testMedium();

    /**
     * set
     */
    std::cout << "SetDemo" << std::endl;
    SetDemo setDemo;
    setDemo.testBasic();
    setDemo.testMedium();

    /**
     * map
     */
    std::cout << "MapDemo" << std::endl;
    MapDemo mapDemo;
    mapDemo.testBasic();
}
