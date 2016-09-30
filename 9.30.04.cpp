/**
 * @file 9.30.04.cpp
 * @brief ofstream
 * @author LiWenGang
 * @date 2016-09-30
 */
#include<cassert>
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char* argv[]){
	ofstream fout;
	fout.open("temp.cc");
	/*
	 * 上面两行等价于ofstream fout("temp.cc");
	 */

	/*
	if(fout.is_open()){//判断打开状态
		cout<<"Open success"<<endl;
	}else{
		cout<<"Open failed"<<endl;
	}*/

	/*
	if(fout.good()){//判断文件流
		cout<<"Open success"<<endl;
	}else{
		cout<<"Open failed"<<endl;
	}*/

	/*
	if(fout){//ofstream类重载了一个类型转换运算符，将对象转换成类型指针。故可以将对象直接作为判定条件
		cout<<"Open success"<<endl;
	}else{
		cout<<"Open failed"<<endl;

	}*/

	assert(fout);//使用断言的方式判断文件打开是否成功，若失败则会抛出错误
	fout.close();
	return 0;
}
