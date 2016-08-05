/**
 * @file 8.05.03.cpp
 * @brief 继承|友元，构造函数调用次序
 * @author LiWenGang
 * @date 2016-08-05
 */
#include<iostream>
using namespace std;

class Base{
	public:
		Base();
		~Base();
		void Show();
	private:
		int num_;
};

class Inherit:public Base{
	public:
		Inherit();
		~Inherit();
		void Show();
	private:
		int num_;
};

int main(int argc,char* argv[]){
	Inherit obj;
	obj.Show();
	obj.Base::Show();
	return 0;
}

void Base::Show(){
	cout<<"Base::Show()"<<endl;
}

void Inherit::Show(){
	cout<<"Inherit::show()"<<endl;
}

Base::Base():num_(10){
	cout<<"default constructor|Base::Base()"<<endl;
}

Base::~Base(){
	cout<<"destructor|Base::~Base()"<<endl;
}

Inherit::Inherit():num_(20){
	cout<<"default constructor"<<endl;
}

Inherit::~Inherit(){
	cout<<"destructor|Inherit::~Inherit()"<<endl;
}

/*
 * 基类没有默认构造函数的时候，基类的构造函数要在派生类构造函数初始化列表中调用
 * 友元类不能被继承：A是B的友元类，C是A的派生类，但C不是B的友元类
 * 友元关系是单向的：A是B的友元类，但B并不是A的友元类
 * 友元关系是不能被传递的：A是B的友元类，B是C的友元类，但A不是C的友元类
 *
 * 派生类对象的构造次序
 * 先调用基类的对象成员的构造函数，然后调用基类构造函数，接着是派生类的对象成员的构造函数，最后是派生类自身的构造函数
 *
 * 静态成员无所谓继承
 */
/*
 * 必须要在构造函数的初始化列表中完成初始化的情况
 * const成员
 * 引用成员
 * 类的对象成员没有默认构造函数的时候，只能够在类的构造函数初始化列表中调用该对象的构造函数进行初始化
 * 基类没有默认构造函数的时候，基类的构造函数要在派生类构造函数初始化列表中调用
 */
