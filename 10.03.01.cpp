/**
 * @file 10.03.01.cpp
 * @brief 函数模板,模板函数重载，函数模板特化
 * @author LiWenGang
 * @date 2016-10-03
 */
#include<iostream>
#include<cstring>
using namespace std;

//函数模板
template <typename T>
const T& Max(const T& a, const T& b);

//函数模板重载
template <typename T>
const T& Max(const T& a, const T& b, const T& c);

//非模板函数重载
const int& Max(const int& a, const int& b);

//函数模板特化
template <>
const char* const& Max(const char* const &a, const char* const &b);

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
	Max(t1,t2);//因为Test类中提供了“<”运算符重载，因此可以比较对象的大小

	cout<<Max("aaa","bbb")<<endl;//会调用函数模板特化

	cout<<Max(12,34,56)<<endl;//会调用模板函数重载

	cout<<Max('a',100)<<endl;//会调用非模板函数重载

	cout<<Max(10,20)<<endl;//会优先调用非模板函数重载
	cout<<Max<>(10,20)<<endl;//会强制调用模板函数|自动推导出max(const int&, const int&);
	cout<<Max<int>(10,20)<<endl;//会强制调用模板函数，但不会自动推导
	return 0;
}


template <typename T>
const T& Max(const T& a, const T& b){
	return a<b?b:a;
}

template <typename T>
const T& Max(const T& a, const T& b, const T& c){
	return max(a,b)<c?c:max(a,b);
}

const int& Max(const int& a, const int& b){
	return a<b?b:a;
}

template <>
const char* const& Max(const char* const &a, const char* const &b){
	return strcmp(a,b)<0?b:a;
}

/*
 * 普通函数只需要声明，即可顺利编译，而模板的编译则需要检查模板的定义
 * 换句话说，对于模板不可以将模板的声明和定义分别放置在*.h和*.cc文件中，然后通过包含头文件的方式引入模板。
 */
