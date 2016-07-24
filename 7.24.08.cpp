/**
 * @file 7.24.08.cpp
 * @brief 引用作为参数传递|引用作为返回值
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;

void swap(int&,int&);
int& index(int);
int c[]={0,1,2,3,4};

int main(int argc, char* argv[]){
	int a=5;
	int b=6;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	
	index(3)=100;
	cout<<"c[3]="<<c[3]<<endl;
	return 0;
}

void swap(int& x, int& y){
	x=x^y;
	y=x^y;
	x=x^y;
}


int& index(int i){
	return c[i];
}
/*
 * 引用作参数时，函数的实参与形参在内存中共用存储单元，因此形参的变化会使实参同时变化。
 * 函数返回引用的一个主要目的是可以将函数放在赋值运算符的左边。
 * 不能返回对局部变量的引用，论其主要原因是因为当局部变量会在其执行完成后销毁内存空间，导致引用失败
 */
