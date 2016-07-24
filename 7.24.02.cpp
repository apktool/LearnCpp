/**
 * @file 7.24.02.cpp
 * @brief 结构体内存对齐 
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;
#pragma pack(4)
struct test{
	char a;
	double b;
}test_t;
#pragma pack()
int main(int argc, char* argv[]){
	cout<<sizeof(test_t)<<endl;
	char* p;
	
	p=(char*)&test_t;
	cout<<(void*)p<<endl;

	p=&test_t.a;
	cout<<(void*)p<<endl;
	return 0;
}

/*
 * 结构体内存对齐 
 * 结构体的第一个成员与结构体变量的偏移量为0
 * 其他成员需要对齐到某个数字（对齐数）的整数倍地址
 * 对齐数取编译器预设的一个对齐整数与该成员大小的较小值
 * 可以使用#pragma pack()来设置对齐数
 *
 * 结构体总大小为对齐数的整数倍
 */
