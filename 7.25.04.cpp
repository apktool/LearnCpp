/**
 * @file 7.25.04.cpp
 * @brief 嵌套类
 * @author LiWenGang
 * @date 2016-07-25
 */
#include<iostream>
using namespace std;

class Outer{
	public:
	//private:
		class Inner{
			public:
				void Fun();
		};
	public:
		Inner obj;
		void Fun();
};

int main(int argc, char* argv[]){
	Outer o;
	o.Fun();

	Outer::Inner i;
	i.Fun();

	return 0;
}

void Outer::Fun(){
	cout<<"Outer::Fun ..."<<endl;
	obj.Fun();
}

void Outer::Inner::Fun(){
	cout<<"Innter::Fun ..."<<endl;
}

/* 从作用域的角度看，嵌套类被隐藏在外围类之中，该类名只能在外围类中使用。如果在外围类的作用域使用该类名时，需要加名字限定。
 * 嵌套类中的成员函数可以在它的类体外定义。
 * 嵌套类的成员函数对外围类的成员没有访问权，反之亦然。
 * 嵌套类仅仅只是语法上的嵌入
 */
