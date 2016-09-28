/**
 * @file 9.28.01.cpp
 * @brief 内存泄露检测
 * @author LiWenGang
 * @date 2016-09-28
 */
#include<iostream>
#include"debug_new.h"

int main(int argc, char* argv[]){
	int *p=new int;
	//delete p;

	int *q=new int[20];
	delete[] q;
	return 0;
}

/*
 * g++ 9.28.01.cpp debug_new.cpp -o a.out -Wall -std=c++11
 */
/*
 * 检测内存泄露：
 * 		自己实现malloc，再里面进行跟踪
 * 第三方工具：
 * 		Linux：valgrind，dmalloc，efence
 * 		windows：visual leak detector
 * 自己实现内存工具：
 * 		自己重载operator new 和 operator delete 实现追踪
 */
