/**
 * @file 7.26.07.cpp
 * @brief 拷贝构造函数
 * @author LiWenGang
 * @date 2016-07-26
 */
#include<iostream>
using namespace std;

class Test{
	public:
		Test(int num);
		Test(const Test& num);	//拷贝构造函数
		~Test();
	private:
		int m_num;
};

int main(int argc, char* argv[]){
	Test t1(10);
	Test t2(t1);				//等价于Test t2=t1;
	return 0;
}

Test::Test(int num):m_num(num){
	cout<<"Initalzing "<<m_num<<endl;
}

Test::Test(const Test& other):m_num(other.m_num){
	cout<<"Initalzing with other "<<m_num<<endl;
}

Test::~Test(){
	cout<<"Destroying "<<m_num<<endl;
}
