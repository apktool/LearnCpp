/**
 * @file 8.02.04.cpp
 * @brief 运算符重载|非成员函数(友元函数)重载
 * @author LiWenGang
 * @date 2016-08-02
 */
#include<iostream>
using std::cout;
using std::endl;

class ComPlex{
	public:
		ComPlex(int a, int b);
		~ComPlex();

		friend ComPlex operator+ (const ComPlex& c1,const ComPlex& c2);

		void Display() const;
	private:
		int m_a;
		int m_b;
};

int main(int argc, char* argv[]){
	ComPlex c1(1,2);
	ComPlex c2(3,4);
	ComPlex c3=c1+c2;
	c3.Display();
	return 0;
}

ComPlex::ComPlex(int a, int b):m_a(a),m_b(b){
	cout<<"constructor function"<<endl;
}

ComPlex::~ComPlex(){
	cout<<"destructor function"<<endl;
}

ComPlex operator+ (const ComPlex& c1, const ComPlex& c2){
	int a=c1.m_a+c2.m_a;
	int b=c1.m_a+c2.m_b;
	return ComPlex(a,b);
}

void ComPlex::Display() const{
	cout<<m_a<<"+"<<m_b<<"i"<<endl;
}

/*
 * 运算符被重载后，其优先级和结合性不会发生改变
 * 一般情况下，单目运算符最好重载为类的成员函数；双目运算符最好重载为类的友元函数
 * 以下的双目运算符不能重载为类的友元函数：
 * 		=  ()  []  ->
 * 	类型转换运算符只能以成员函数方式重载
 * 	流运算符只能以友元的方式重载
 */
