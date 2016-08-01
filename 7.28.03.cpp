/**
 * @file 7.28.03.c
 * @brief static,static const int
 * @author LiWenGang
 * @date 2016-07-28
 */
#include<iostream>
using std::cout;
using std::endl;

class Object{
	public:
		Object();
		~Object();
		static int cnt;			//静态成员的引用性声明
		static const int num=100;//static const int或static const char可以不使用静态成员的定义性声明，同时可以在引用性声明的时候，完成变量的初始化操作
};

int Object::cnt=0;//静态成员的定义性声明

int main(int argc, char* argv[]){
	cout<<Object::num<<endl;
	cout<<Object::cnt<<endl;
	Object obj1;
	cout<<Object::cnt<<endl;
	Object obj2;
	cout<<Object::cnt<<endl;
	Object* obj3=new Object;
	cout<<Object::cnt<<endl;
	delete obj3;
	cout<<Object::cnt<<endl;
	return 0;
}

Object::Object(){
	cnt++;
}


Object::~Object(){
	cnt--;
}
