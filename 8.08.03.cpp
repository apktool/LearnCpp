/**
 * @file 8.08.03.cpp
 * @brief 虚函数及其内存模型
 * @author LiWenGang
 * @date 2016-08-08
 */
#include<iostream>
using namespace std;

class Base{
	public:
		virtual void Fun1();
		virtual void Fun2();
		int data1_;
};

class Derived:public Base{
	public:
		void Fun2();
		virtual void Fun3();
		int data2_;
};

typedef void (*FUNC)();

int main(int argc, char* argv[]){
	cout<<sizeof(Base)<<endl;
	cout<<sizeof(Derived)<<endl;

//-----------------------------------------

	long** p;
	FUNC fun;
	Base b;

	p=(long**)&b;
	fun=(FUNC)p[0][0];
	fun();
	fun=(FUNC)p[0][1];
	fun();

//-----------------------------------------

	Derived d;

	p=(long**)&d;
	fun=(FUNC)p[0][0];
	fun();
	fun=(FUNC)p[0][1];
	fun();
	fun=(FUNC)p[0][2];
	fun();

//-----------------------------------------

	Base* pp=&d;
	pp->Fun2();
	return 0;
}

void Base::Fun1(){
	cout<<"Base::Fun1()"<<endl;
}

void Base::Fun2(){
	cout<<"Base::Fun2()"<<endl;
}

void Derived::Fun2(){
	cout<<"Derived::Fun2()"<<endl;
}

void Derived::Fun3(){
	cout<<"Derived::Fun3()"<<endl;
}

/*
 * vptr:虚表指针
 * vbtl:虚基类表
 *     Base          vbtl
 * ->  ------   -------------
 *    | vptr |->| Base::Fun1 |
 *     ------    ------------
 *    |data1_|  | Base::Fun2 |
 *     ------    ------------
 *
 *     Base          vbtl
 * ->  ------    ---------------
 *    | vptr |->| Base::Fun1    |
 *     ------    ---------------
 *    |data1_|  | Derived::Fun2 |
 *     ------    ---------------
 *    |data2_|  | Derived::Fun3 |
 *     ------    ---------------
 */
