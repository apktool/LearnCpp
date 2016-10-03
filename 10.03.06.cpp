/**
 * @file 10.03.06.cpp
 * @brief typename
 * @author LiWenGang
 * @date 2016-10-03
 */
#include<iostream>
using namespace std;

template <typename T>
class MyClass{
	private:
		//T::SubType* ptr_;//系统会以为SbuType是T的一个静态成员乘以ptr
		typename T::SubType* ptr_;
};

class Test{
	public:
		typedef int SubType;
};

int main(int argc, char* argv[]){
	MyClass<Test> mc;
	return 0;
}
