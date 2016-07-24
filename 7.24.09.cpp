/**
 * @file 7.24.09.cpp
 * @brief const_cast
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;

void fun(int&);

int main(int argc, char* argv[]){
	const int val=100;
	//int n=const_cast<int>(val);
	int n=val;
	cout<<"n="<<n<<endl;

	//int* p=&val;	Error,无法从const int* 转换为 int*
	int*p=const_cast<int*>(&val);
	*p=200;
	cout<<"val="<<val<<endl;
	cout<<"*p="<<*p<<endl;

	const int num=200;
	//int &renum=num;	//Error	
	int &renum=const_cast<int&>(num);
	renum=300;
	cout<<"num="<<num<<endl;
	cout<<"renum="<<renum<<endl;

	fun(const_cast<int&>(num));
	return 0;
}


void fun(int& number){
	cout<<number<<endl;
}

/*
 * const_cast
 * 用来移除对象的常量性(cast away the constness)
 * const_cast一般用于指针或者引用
 * 使用const_cast去除const限定的目的不是为了修改它的内容，通常是为了函数能够接受这个实际参数
 */
