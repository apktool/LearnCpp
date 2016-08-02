/**
 * @file 8.02.03.cpp
 * @brief 运算符重载|成员函数重载
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

		ComPlex operator+ (const ComPlex& other);

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

ComPlex ComPlex::operator+ (const ComPlex& other){
	int a=m_a+other.m_a;
	int b=m_b+other.m_b;
	return ComPlex(a,b);
}

void ComPlex::Display() const{
	cout<<m_a<<"+"<<m_b<<"i"<<endl;
}
