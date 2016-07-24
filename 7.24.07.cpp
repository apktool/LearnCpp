/**
 * @file 7.24.07.cpp
 * @brief 引用|const 引用
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
	int val=100;
	cout<<val<<endl;
	int &refval=val;
	refval=200;
	cout<<val<<endl;


	const int num=1024;
	const int& renum=num;
	cout<<renum<<endl;

	//int &ref=num;		Error,
	const int &ref=val;	//const 引用可以指向一个非const类型
	cout<<ref<<endl;
	
	return 0;
}

/*
 * 引用不是变量
 * 引用仅仅只是变量的别名
 * 引用没有自己独立的空间
 * 对引用所做的改变本质上是对他所引用的变量的改变
 * 引用在定义的使用必须初始化
 * 引用一经初始化，不能重新指向其他变量
 */
