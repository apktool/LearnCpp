/**
 * @file 8.08.02.cpp
 * @brief 虚析构函数
 * @author LiWenGang
 * @date 2016-08-08
 */
#include<iostream>
using namespace std;

class Base{
	public:
		Base();
		virtual ~Base();	//如果一个类要作为多态基类，要将其析构函数定义成虚构函数
		virtual void Fun1();
		virtual void Fun2();
		void Fun3();
};

class Derived:public Base{
	public:
		Derived();
		~Derived();
		virtual void Fun1();
		virtual void Fun2();
		void Fun3();
};


int main(int argc, char* argv[]){
	Base* p=new Derived;

	p->Fun1();
	delete p;

	return 0;
}

Base::Base(){
	cout<<"Base::Base()"<<endl;
}

Base::~Base(){
	cout<<"Base::~Base()"<<endl;
}

Derived::Derived(){
	cout<<"Derived::Derived()"<<endl;
}

Derived::~Derived(){
	cout<<"Derived::~Derived()"<<endl;
}

void Base::Fun1(){
	cout<<"Base::Fun1()"<<endl;
}

void Base::Fun2(){
	cout<<"Base::Fun2()"<<endl;
}

void Base::Fun3(){
	cout<<"Base::Fun3()"<<endl;
}

void Derived::Fun1(){
	cout<<"Derived::Fun1()"<<endl;
}

void Derived::Fun2(){
	cout<<"Derived::Fun2()"<<endl;
}

void Derived::Fun3(){
	cout<<"Derived::Fun3()"<<endl;
}

/*
 * 虚函数的动态绑定是通过虚表来实现的；
 * 包含虚函数的类前4个字节用于存放指向虚表的指针。
 */
