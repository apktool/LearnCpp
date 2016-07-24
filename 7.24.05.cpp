/**
 * @file 7.24.05.cpp
 * @brief 函数重载
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;

void fun(int, int);
void fun(double, double);

int main(int argc, char* argv[]){
	fun(3,4);
	fun(3.0,4.0);
	return 0;
}

void fun(int x, int y){
	cout<<x+y<<endl;
}

void fun(double x, double y){
	cout<<x+y<<endl;
}

/*
 * 相同的作用域，如果两个函数名称相同，而参数不同，我们把它们称为重载overload
 * 函数重载又称为函数的多态性（静态多态性）
 */
