/**
 * @file 7.26.05.cpp
 * @brief 嵌套类构造函数和析构函数的执行次序|构造函数初始化值列表
 * @author LiWenGang
 * @date 2016-07-26
 */
#include<iostream>
using namespace std;

class Object{
	public:
		Object(int num);
		~Object();
	private:
		int m_num;
};

class Container{
	public:
		Container(int obj1, int obj2);
		~Container();
	private:
		Object m_obj1;
		Object m_obj2;
};

int main(int argc, char* argv[]){
	Container ct(30,40);
	return 0;
}

Object::Object(int num):m_num(num){
	cout<<"Object ..."<<m_num<<endl;
}

Object::~Object(){
	cout<<"~Object ..."<<m_num<<endl;
}

Container::Container(int obj1=10, int obj2=20):m_obj1(obj1),m_obj2(obj2){
	cout<<"Container ..."<<endl;
}

Container::~Container(){
	cout<<"~Container ..."<<endl;
}

/*
 * 对象的初始化顺序与初始化值列表中的顺序并没有关系，其顺序取决于其在类中的声明次序；
 * 如果一个类中嵌套的这个类中如果没有默认构造函数的话，一定要在外面的那个类的构造函数初始化值列表完成初始化操作
 */
