/**
 * @file 8.10.01.cpp
 * @brief dynamic_cast,typeid
 * @author LiWenGang
 * @date 2016-08-10
 */
#include<iostream>
#include<typeinfo>
using namespace std;

class Shape{
	public:
		virtual void Draw()=0;
		virtual ~Shape();
};

class Circle:public Shape{
	public:
		void Draw();
};

class Square:public Shape{
	public:
		void Draw();
};

int main(int argc, char* argv[]){
	Shape *p;
	Circle c;

	p=&c;
	p->Draw();

	if(dynamic_cast<Circle*>(p)){
		cout<<"p is point of Circle object"<<endl;
		Circle* cp=dynamic_cast<Circle*>(p);	//安全向下转型
		cp->Draw();
	}else if(dynamic_cast<Square*>(p)){
		cout<<"p is point to a Square object"<<endl;
	}else{
		cout<<"p is point to a Other object"<<endl;
	}

	cout<<typeid(*p).name()<<endl;
	cout<<typeid(Circle).name()<<endl;
	if(typeid(Circle).name()==typeid(*p).name()){
		cout<<"p is point of Circle object"<<endl;
		((Circle*)p)->Draw();
	}else{
		cout<<"p is point to a Other object"<<endl;
	}

   	return 0;
}

Shape::~Shape(){
	cout<<"Shape::~Shape()"<<endl;
}

void Circle::Draw(){
	cout<<"Circle::Draw()"<<endl;
}

void Square::Draw(){
	cout<<"Square::Draw()"<<endl;
}
/*
 * RTTI(runtime type information)
 *
 * static_cast 		编译器认可的转型
 * reinterpre_cast 	用于编译器不认可的转型，不做任何的对齐操作
 * const_cast 		用于去除常量限定
 * dynamic_cast 	安全的向下转型
 */
