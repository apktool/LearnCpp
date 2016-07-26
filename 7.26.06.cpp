/**
 * @file 7.26.06.cpp
 * @brief 初始化成员列表|const成员初始化，引用成员初始化，无默认构造函数的对象成员初始化
 * @author LiWenGang
 * @date 2016-07-26
 */
#include<iostream>
using namespace std;

class Object{
	public:
		Object(int num);
		~Object();
		void Display();
	private:
		int m_num_1;
		const int m_num;
		int& m_num_2;
};

int main(int argc, char* argv[]){
	Object obj(10);
	obj.Display();
	return 0;
}

Object::Object(int num=0):m_num_1(num),m_num(num),m_num_2(num){
	cout<<"Object"<<endl;
}

Object::~Object(){
	cout<<"~Object"<<endl;
}

void Object::Display(){
	cout<<"int m_num_1="<<m_num_1<<endl;
	cout<<"const int m_num="<<m_num<<endl;
	cout<<"int& m_num_2="<<m_num_2<<endl;
}

/*
 * const 成员的初始化只能在构造函数初始化成员列表中完成;
 * 引用成员的初始化只能在构造函数初始化成员列表中完成;
 * 对象成员（对象所对应的类没有默认构造函数），对象成员的初始化也只能在构造函数初始化成员列表中完成;
 */
