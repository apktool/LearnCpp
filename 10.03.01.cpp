/**
 * @file 10.03.01.cpp
 * @brief 函数模板
 * @author LiWenGang
 * @date 2016-10-03
 */
#include<iostream>
using namespace std;

template <typename T>
const T& Max(const T& a, const T& b);

class Test{
	friend bool operator< (const Test& t1, const Test& t2){
		return true;
	}
};

int main(int argc, char* argv[]){
	cout<<Max(5.5,6.6)<<endl;
	cout<<Max(5,6)<<endl;
	cout<<Max('a','d')<<endl;

	Test t1,t2;
	Max(t1,t2);

	return 0;
}


template <typename T>
const T& Max(const T& a, const T& b){
	return a<b?b:a;
}

/*
 * 普通函数只需要声明，即可顺利编译，而模板的编译则需要检查模板的定义
 * 换句话说，对于模板不可以将模板的声明和定义分别放置在*.h和*.cc文件中，然后通过包含头文件的方式引入模板。
 */
