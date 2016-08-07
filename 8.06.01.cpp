/**
 * @file 8.06.01.cpp
 * @brief 多重继承
 * @author LiWenGang
 * @date 2016-08-06
 */

#include<iostream>
using namespace std;

class Bed{
	public:
		Bed(int weight);
		void Sleep();
		int weight_;
};

class Sofa{
	public:
		Sofa(int weight);
		void WatchTV();
		int weight_;
};

class SofaBed:public Bed, public Sofa{
	public:
		SofaBed();
		void FoldOut();
		void FoldIn();

};

int main(int argc, char* argv[]){
	SofaBed sofabed;
	//sofabed.weight_=10;	//因为类SofaBed继承自类Bed和Sofa，而这两个类中都有weight_这个变量，从而导致sofabed.weight访问不明确，解决办法是显式指定类
	sofabed.Bed::weight_=10;
	sofabed.Sofa::weight_=20;

	sofabed.WatchTV();
	sofabed.FoldOut();
	sofabed.Sleep();
	return 0;
}

Sofa::Sofa(int weight):weight_(weight){

}

SofaBed::SofaBed():Bed(0),Sofa(0){
	FoldIn();
}

Bed::Bed(int weight):weight_(weight){

}

void Bed::Sleep(){

}


void Sofa::WatchTV(){
	cout<<"Watch TV..."<<endl;
}


void SofaBed::FoldOut(){
	cout<<"FoldOut..."<<endl;
}

void SofaBed::FoldIn(){
	cout<<"FoldIn..."<<endl;
}

/*
 * 单重继承：一个派生类最多只能有一个基类
 * 多重继承：一个派生类可以有多个基类
 * 	派生类可以同时继承多个基类的成员，具有更好的软件复用性
 * 	可能会存在二义性，多个基类中可能包含同名变量或函数
 *
 */
