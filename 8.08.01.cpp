/**
 * @file 8.08.01.cpp
 * @brief 虚函数
 * @author LiWenGang
 * @date 2016-08-08
 */
#include<iostream>
using namespace std;

class Base{
	public:
		virtual void Fun1();
		virtual void Fun2();
		void Fun3();
};

class Derived:public Base{
	public:
		virtual void Fun1();
		virtual void Fun2();
		void Fun3();
};


int main(int argc, char* argv[]){
	Base* p;
	Derived d;

	p=&d;
	p->Fun1();	//Fun1是虚函数，基类指针指向派生类对象，调用的是派生类对象的虚函数
	p->Fun2();
	p->Fun3();	//Fun3不是虚函数，根据指针p实际类型调用相应类的成员函数
	return 0;
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
 * 多态性是指发出同样的消息被不同类型的对象接收时有可能导致完全不同的行为
 *
 * 多态的实现
 * 	·函数重载
 * 	·运算符重载
 * 	·模板
 * 	·虚函数
 * 前三种称之为静态多态（静态绑定）
 * 最后一种称为静态多态（动态绑定）
 *
 * 静态绑定：绑定过程中出现在编译阶段，在编译期就已确定要调用的函数
 * 动态绑定：绑定过程工作在程序运行时执行，在程序运行时才确定要调用的函数
 */
