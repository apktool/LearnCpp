#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
	const int a=100;
	//const int a;	//Error,常量必须初始化 
	//a=200;		//Error,常量不能重新被赋值
	cout<<a<<endl;

	int b=22;
	const int *p;	//const在*的左边，表示*p为常量，经由*p不能更改指针所指向的内容
	p=&b;
	//const int *p=&b;	//与上面的用法一致
	//*p=200		//Error,常量不能重新被赋值
	cout<<*p<<endl;

	int c=200;
	int * const q=&c;	//const在*的右边，表示q是一个常量
	//q=&b;			//Error,常量不能重新被赋值
	cout<<*q<<endl;

	return 0;
}

/*
 * const int *p		// *p是一个常量，*p不能被修改；但是p可以被修改
 * int* const p		// p是一个常量，p不能被修改；但是*p可以被修改
 *
 */ 
