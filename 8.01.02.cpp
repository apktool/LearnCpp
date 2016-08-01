/**
 * @file 8.01.02.cpp
 * @brief const对象
 * @author LiWenGang
 * @date 2016-08-01
 */
#include<iostream>
using std::cout;
using std::endl;

class Test{
	public:
		Test(int x);
		int GetX();
		int GetX() const;
	private:
		int m_x;
};

int main(int argc, char* argv[]){
	const Test obj1(10);
	cout<<obj1.GetX()<<endl;

	Test obj2(20);
	cout<<obj2.GetX()<<endl;
	return 0;
}

Test::Test(int x):m_x(x){
	m_x=x;
}

int Test::GetX(){
	cout<<"Getx() | ";
	return m_x;
}

int Test::GetX() const{
	cout<<"Getx() const | ";
	return m_x;
}

/*
 * const对象不能调用非const成员函数
 */
