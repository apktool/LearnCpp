/**
 * @file 10.01.02.cpp
 * @brief seekg,tellg
 * @author LiWenGang
 * @date 2016-10-01
 */
#include<cassert>
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc,char* argv[]){
	ifstream fin("test.txt");
	assert(fin);
	
	char ch;

	fin.seekg(2);
	fin.get(ch);
	cout<<ch<<endl;

	fin.seekg(-2,ios::end);
	fin.get(ch);
	cout<<ch<<endl;

	fin.seekg(0,ios::end);
	streampos pos=fin.tellg();
	cout<<pos<<endl;

	fin.close();
	return 0;
}

/*
 * tellp:获取输出的文件流指针的当前位置，以字节为单位
 * tellg:获取输入的文件流指针的当前位置，以字节为单位
 */
/*
 * 目前存在的问题，seekg中定位到的位置，本来-1应该是最后一个字符，但是经过验证-2才会定位到最后一个字节，也就是说在写入的字节后面会多出两个不可见的字符。
 */
