/**
 * @file 7.28.01.cpp
 * @brief 静态成员函数，静态成员
 * @author LiWenGang
 * @date 2016-07-28
 */
#include<iostream>
using std::cout;
using std::endl;

class Test{
	public:
		Test(int);
		~Test();
		void TestFun();					
		static void TestStaticFun();
	private:
		static int m_x;
		int m_y;
};

int Test::m_x=10;

int main(int argc, char* argv[]){
	Test t(100);
	t.TestFun();
	return 0;
}

Test::Test(int y):m_y(y){

}

void Test::TestFun(){
	cout<<"m_x="<<m_x<<endl;// 非静态成员函数可以访问静态成员
}

void Test::TestStaticFun(){
	//cout<<"m_y="<<m_y<<endl;// 静态成员函数不可以访问非静态成员
}

Test::~Test(){

}

/*
 * 非static数据成员存在于类类型的每个对象中；static数据成员独立该类的任何对象存在，它是与类关联的对象，不与类对象关联
 * 静态（static）成员函数没有this指针，因此静态成员函数不可以访问非静态成员
 * 非静态成员函数可以访问静态成员
 */
