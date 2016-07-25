/**
 * @file 7.25.02.cpp
 * @brief 内联成员函数，成员函数的重载
 * @author LiWenGang
 * @date 2016-07-25
 */
#include<iostream>
using namespace std;

class Test{
	public:
		int add(int a, int b);

		//成员函数的重载
		void Init();
		void Init(int x);
		void Init(int x, int y);
		void Init(int x, int y, int z);
		void Display();
	private:
		int m_x;
		int m_y;
		int m_z;
};

int main(int argc, char* argv[]){
	Test ch;
	cout<<ch.add(3,4)<<endl;

	Test t;
	t.Init();
	t.Display();

	t.Init(3);
	t.Display();
	
	t.Init(3,4);
	t.Display();

	t.Init(3,4,5);
	t.Display();

	return 0;
}


inline int Test::add(int a, int b){
	return a+b;
}

void Test::Init(){
	m_x=0;
	m_y=0;
	m_z=0;
}

void Test::Init(int x){
	m_x=x;
	m_y=0;
	m_z=0;
}

void Test::Init(int x, int y){
	m_x=x;
	m_y=y;
	m_z=0;
}

void Test::Init(int x, int y, int z){
	m_x=x;
	m_y=y;
	m_z=z;
}

void Test::Display(){
	cout<<"x="<<m_x<<"y="<<m_y<<"z="<<m_z<<endl;
}

/* inline函数的实现方式
 * 1.在类中直接实现成员函数
 * 2.在实现成员函数的时候，显式的使用inline注明成员函数
 */
