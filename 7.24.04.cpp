/**
 * @file 7.24.04.cpp
 * @brief new,free
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
	int* p=new int;		//分配一个整数空间  4KB
	cout<<*p<<endl;
	delete p;

	int *q=new int(20);	//分配一个证书空间  4kB  同时完成赋值
	cout<<*q<<endl;
	delete q;

	int *r=new int[10];	//分配一个连续的10个整数空间  40KB
	cout<<*r<<endl;
	delete[] r;

	return 0;
}

/*
 * new一个新对象
 * 	 内存分配(operator new)
 *	 调用构造函数
 * delete释放一个对象
 *	 调用析构函数
 *	 释放内存(operator delete)
 *
 *
 */
