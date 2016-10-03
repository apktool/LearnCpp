/**
 * @file 10.03.05.cpp
 * @brief 成员模板|不同类型之间的赋值
 * @author LiWenGang
 * @date 2016-10-03
 */

#include<iostream>
using namespace std;

template<typename T>
class MyClass{
	public:
		MyClass(){}
		~MyClass(){}
	public:
		template<class X>
		MyClass(const MyClass<X>& x):value_(x.GetValue()){}


		template<class X>
		void Assign(const MyClass<X>& x)	{
			value_=x.GetValue();		
			//value=x.value_;//本来可以使用这种方式直接完成赋值，但是如果参数类型不一致，则会出错
		}
		T GetValue() const{
			return value_;
		}
	private:
		T value_;
};

int main(int argc, char* argv[]){
	MyClass<double> d;
	MyClass<int> i;
	d.Assign(d);
	d.Assign(i);//将int型赋值给double型，如果不采用成员模板实现的话，会编译出错。

	MyClass<double> d2(i);//采用构造函数的方式进行类型不匹配的赋值，因此需要自己重新定义构造函数

	return 0;
}
