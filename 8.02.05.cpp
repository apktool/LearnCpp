/**
 * @file 8.02.05.cpp
 * @brief 前置++运算符重载
 * @author LiWenGang
 * @date 2016-08-02
 */
#include<iostream>
using std::cout;
using std::endl;

class Integer{
	friend Integer& operator++ (Integer& obj); //友元函数的方式重载++
	public:
		Integer(int num);
		~Integer();
		//Integer& operator++(); //成员函数的方式重载++
		void Display();
	private:
		int m_num;
};

int main(int argc, char* argv[]){
	Integer obj(10);
	++obj;
	obj.Display();
	return 0;
}

Integer::Integer(int num):m_num(num){
	cout<<"constructor"<<endl;
}

Integer::~Integer(){
	cout<<"destructor"<<endl;
}

/*
//成员函数的方式重载++
Integer& Integer::operator++(){
	++m_num;
	return *this;
}
*/

//友元函数的方式重载++
Integer& operator++ (Integer& obj){
	++obj.m_num;
	return obj;
}


void Integer::Display(){
	cout<<m_num<<endl;
}
