/**
 * @file 8.02.01.cpp
 * @brief friend|友元函数
 * @author LiWenGang
 * @date 2016-08-02
 */
#include<iostream>
#include<cmath>
using std::cout;
using std::endl;

class objection{
	friend double Distance(const objection& obj1, const objection& obj2);
	public:
		objection(int x, int y);
		~objection();
	private:
		int m_x;
		int m_y;
};

int main(int argc, char* argv[]){
	objection obj1(3,4);
	objection obj2(6,8);	
	cout<<Distance(obj1,obj2)<<endl;
	return 0;
}

objection::objection(int x, int y):m_x(x),m_y(y){
	cout<<"construction"<<endl;
}

objection::~objection(){
	cout<<"destructor"<<endl;
}

double Distance(const objection& obj1, const objection& obj2){
	int dx=obj1.m_x-obj2.m_x;
	int dy=obj1.m_y-obj2.m_y;
	return sqrt(dx*dx+dy*dy);
}


/*
 * 友元是一种允许非类成员函数访问类的非公有成员的一种机制
 * 可以把一个函数定义为类的友元（友元函数），也可以把整个类指定为另一个类的友元（友元类）
 * 友元在类作用域外定义，但它需要在类体中进行说明
 * 友元函数不受类中的访问权限关键字限制，可以把它放在类的公有、私有、保护部分，结果一样
 */
