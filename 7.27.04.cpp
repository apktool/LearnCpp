/**
 * @file 7.27.04.cpp
 * @brief static
 * @author LiWenGang
 * @date 2016-07-27
 */
#include<iostream>
using std::cout;
using std::endl;


class CountedObject{
	public:
		CountedObject();
		~CountedObject();
		static int cnt;		//静态成员的引用性声明
};

int CountedObject::cnt=0;	//静态成员的定义性声明

int main(int argc, char* argv[]){
	cout<<CountedObject::cnt<<endl;
	CountedObject obj1;
	cout<<CountedObject::cnt<<endl;
	CountedObject* ptr=new CountedObject;
	cout<<CountedObject::cnt<<endl;
	delete ptr;
	cout<<CountedObject::cnt<<endl;
	return 0;
}

CountedObject::CountedObject(){
	++cnt;
}

CountedObject::~CountedObject(){
	--cnt;
}

/*
 * 非static数据成员存在于类类型的每个对象中，static数据成员独立该类的任意对象存在，它是与类关联的对象，不与类对象关联。即不同的对象共享同一静态数据成员
 */
