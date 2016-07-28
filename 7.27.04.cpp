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
		static int cnt;		//静态成员的引用性声明，对于int和char型的，可以直接在引用性声明这里完成初始化操作，但其他类型不可以
		static const int num=0; //对于static const的话，可以不需要“静态成员的定义性声明”，比较特殊
};

int CountedObject::cnt=0;	//静态成员的定义性声明

int main(int argc, char* argv[]){
	cout<<CountedObject::cnt<<endl;
	CountedObject obj1;
	//cout<<obj1.cnt<<"||"<<obj1.num<<endl;	//使用使用（“对象.静态成员”）的方式访问静态成员，但是不建议。
											//因为静态成员是属于该类的，如果采用这种方式访问的话，会导致程序可读性变差
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
