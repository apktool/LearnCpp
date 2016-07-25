/**
 * @file 7.25.03.cpp
 * @brief 作用域
 * @author LiWenGang
 * @date 2016-07-25
 */
#include<iostream>
using namespace std;

int add(int x, int y);	//函数原型作用域

int main(int argc, char* argv[]){
	int num=30;		//块作用域
	{
		int num=30;	//块作用域
	}

	add(3,4);
	return 0;
}

int add(int x, int y){	//块作用域
	return x+y;
}

/*
 * 作用域：
 * 文件作用域
 * 块作用域：一般以"{}"为界限
 * 函数原型作用域：函数声明部分的变量
 * 函数作用域：一般仅对于goto语句而言的
 * 类作用域
 */
