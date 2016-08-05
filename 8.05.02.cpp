/**
 * @file 8.05.02.cpp
 * @brief 继承|重定义
 * @author LiWenGang
 * @date 2016-08-05
 */
#include<iostream>
using namespace std;

class Base{
	public:
		void show();
};

class Inherit:public Base{
	public:
		void show();
};

int main(int argc, char* argv[]){
	Inherit obj;
	obj.show();
	obj.Base::show();
	/*
	 * 当基类与派生类中有相同的数据成员或成员函数时，会优先使用派生类的数据成员或成员函数
	 * 如需使用基类中的数据成员或成员函数，需要显式指定。
	 */
	return 0;
}

void Base::show(){
	cout<<"Base::show"<<endl;
}

void Inherit::show(){
	cout<<"Inherit show"<<endl;
}


/*
 * 接口继承：
 * 基类的公有成员函数在派生类中仍然是公有的，话句话说是基类的接口成为了派生类的接口，因而将它称为接口继承
 * 实现继承；
 * 对于私有、保护继承会导致基类的公有成员函数在派生类不再保持公有的属性，派生类将不再支持基类的公有接口，它希望能重用基类的实现而已，因此将它称为实现继承。
 */

/*
 * 对基类数据成员的重定义
 * 对基类成员函数的重定义---|---overwrite：与基类完全相同；与基类成员函数名相同
 * 							|---override
 */
