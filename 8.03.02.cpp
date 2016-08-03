/**
 * @file 8.03.02.cpp
 * @brief 类型转换运算符
 * @author LiWenGang
 * @date 2016-08-03
 */
#include<iostream>
using std::cout;
using std::endl;

class Integer{
	public:
		Integer(int num);
		~Integer();
		operator int();	//类型转化运算符|将类类型转换为int
		void Display();
	private:
		int m_num;
};

int main(int argc, char* argv[]){
	Integer obj(10);

	int num=obj;
	cout<<num<<endl;

	return 0;
}

Integer::Integer(int num):m_num(num){
	cout<<"constructor"<<endl;
}

Integer::~Integer(){
	cout<<"destructor"<<endl;
}

Integer::operator int(){
	return m_num;
}

void Integer::Display(){
	cout<<m_num<<endl;
}

/*
 * 类型转化运算符：
 * 必须是成员函数，不能是友元函数
 * 没有参数
 * 不能制定返回类型
 * 函数原型：operator 类型名 ();
 */
