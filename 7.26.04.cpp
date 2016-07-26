/**
 * @file 7.26.04.cpp
 * @brief 嵌套类构造函数和析构函数的执行次序
 * @author LiWenGang
 * @date 2016-07-26
 */
#include<iostream>
using namespace std;

class Object{
	public:
		Object();
		~Object();
};

class Container{
	public:
		Container();
		~Container();
	private:
		Object obj;
};

int main(int argc, char* argv[]){
	Container ct;
	return 0;
}

Object::Object(){
	cout<<"Object ..."<<endl;
}

Object::~Object(){
	cout<<"~Object ..."<<endl;
}

Container::Container(){
	cout<<"Container ..."<<endl;
}

Container::~Container(){
	cout<<"~Container"<<endl;
}
