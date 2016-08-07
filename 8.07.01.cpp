/**
 * @file 8.07.01.cpp
 * @brief 虚继承|虚基类
 * @author LiWenGang
 * @date 2016-08-07
 */
#include<iostream>
using namespace std;

class Furniture{
	public:
		Furniture(int weight);
		~Furniture();
		int weight_;
};

class Bed:virtual public Furniture{
	public:
		Bed(int weight);
		~Bed();
		void Sleep();
	int weight_;
};

class Sofa:virtual public Furniture{
	public:
		Sofa(int weight);
		~Sofa();
		void Watch();
		int weight_;
};

class SofaBed:public Bed, public Sofa{
	public:
		SofaBed(int weight);
		~SofaBed();
		void FoldIn();
		void FoldOut();
		int weight_;
};

int main(int argc, char* argv[]){
	SofaBed sf(10);
	sf.Watch();
	sf.Sleep();
	return 0;
}

void Bed::Sleep(){
	cout<<"Sleeping.."<<endl;
}

void Sofa::Watch(){
	cout<<"Watching.."<<endl;
}

void SofaBed::FoldIn(){
	cout<<"FoldIn.."<<endl;
}

void SofaBed::FoldOut(){
	cout<<"FoldOut.."<<endl;
}

Furniture::Furniture(int weight):weight_(weight){
	cout<<"Furniture()"<<endl;
}

SofaBed::SofaBed(int weight):Bed(weight),Sofa(weight),Furniture(weight){
	cout<<"SofaBed()"<<endl;
	FoldIn();
}

Bed::Bed(int weight):Furniture(weight){
	cout<<"Bed()"<<endl;
}

Sofa::Sofa(int weight):Furniture(weight){
	cout<<"Sofa()"<<endl;
}

Furniture::~Furniture(){
	cout<<"~Furniture()"<<endl;
}

Sofa::~Sofa(){
	cout<<"~Sofa()"<<endl;
}

Bed::~Bed(){
	cout<<"~Bed()"<<endl;
}

SofaBed::~SofaBed(){
	cout<<"~SofaBed()"<<endl;
}
/*
 * 虚基类用于拥有共同基类的场合
 * 	主要用来解决多继承时可能发生的同一基类继承多次而产生的二义性问题；
 * 	为最远的派生类提供唯一的基类成员，而不重复产生多次拷贝；
 * 钻石继承体系
 *
 * 虚基类的成员是由最远派生类的构造函数通过调用虚基类的构造函数进行初始化的；
 * 在整个继承结构中，直接或间接继承虚基类的所有派生类，都必须在构造函数的成员初始化列表中给出对虚基类的构造函数的调用。如果为列出，则表示调用该虚基类的默认构造函数；
 * 在建立对象时，只有最远派生类的构造函数调用虚基类的构造函数，该派生类的其他基类对虚基类构造函数的调用被忽略。
 */
