/**
 * @file 7.24.06.c
 * @brief 带默认形参值的函数
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;

int fun(int, int b=3);


int main(int argc, char* argv[]){
	cout<<fun(3)<<endl;
	cout<<fun(4,4)<<endl;
	return 0;
}

int fun(int a, int b){
	return a+b;
}

/*
 * 函数没有声明时，在函数定义中指定形参的默认值
 * 函数既有定义又有声明时，声明时指定后，定义后就不能再指定默认值
 * 默认值的定义必须遵守从右到左的顺序，如果某个形参没有默认值，则它左边的参数就不能有默认值。
 * 重载的函数中如果形参带有默认值时，可能产生二义性。比如
 * int fun(int a=1,int b=2);
 * int fun(int a=1,int b=2,int c=3);
 */
