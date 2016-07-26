/**
 * @file 7.26.01.cpp
 * @brief 构造函数，析构函数
 * @author LiWenGang
 * @date 2016-07-26
 */
#include<iostream>
using namespace std;

class Test{
	public:
		/*
		 * 如果没有显式的编写构造函数，系统会默认的添加不带参数的构造函数；
		 * 如果显示的编写了构造函数，系统将不会添加默认构造函数
		 * 构造函数同样可以使用重载操作
		 */
		Test();
		Test(int num);
		/*
		 * 析构函数不能被重载
		 * 如果没有定义析构函数，编译器会自动生成一个默认析构函数
		 */
		~Test();

		void Display();
	private:
		int m_num;
};

int main(int argc, char* argv[]){
	Test t1;
	t1.Display();

	Test t2(10);
	t2.Display();

	Test* t3=new Test(20);
	t3->Display();
	delete t3;

	return 0;
}

Test::Test(){
	m_num=0;
}

Test::Test(int num){
	m_num=num;
}

Test::~Test(){
	cout<<"Destroy "<<m_num<<endl;
}

void Test::Display(){
	cout<<"num="<<m_num<<endl;
}
/* 构造函数：
 *
 * 构造函数是特殊的成员函数
 * 创建类类型的新对象，系统自动会调用构造函数
 * 构造函数是为了保证对象的每个数据成员都被正确初始化
 *
 * 构造函数可以有任意类型和任意个数的参数，一个类可以有多个构造函数（重载）
 * 不带参数的构造函数（默认构造函数）
 */

/*
 * 析构函数：
 *
 * 没有返回类型
 * 没有参数
 * 默认析构函数是一个空函数。
 */
