/**
 * @file 7.24.10.cpp
 * @brief static_cast
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
	int cnt=static_cast<int>(3.14);
	cout<<"cnt="<<cnt<<endl;

	void *p=&cnt;
	int *q=static_cast<int*>(p);
	cout<<"*q="<<*q<<endl;
	return 0;
}

/*
 * 编译器隐式执行的任何类型转换都可以由static_cast完成
 * 当一个较大的算术类型赋值给较小的类型时，可以用static_cast进行强制转换。
 * 可以将void*指针转换为某一类型的指针
 * 可以将基类指针转换为派生类指针
 * 无法将const转化为nonconst，这个只有const_cast才可以办得到
 */
