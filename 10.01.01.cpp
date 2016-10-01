/**
 * @file 10.01.01.cpp
 * @brief 含有string类型的文件写入
 * @author LiWenGang
 * @date 2016-10-01
 */
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Test{
	int a;
	string b;
	string c;
};

int main(int argc,char* argv[]){
	Test t1;
	t1.a=1;
	t1.b="aaaaaaaaaabbbbbbbbcccccccccdddddddd";
	t1.c="eeeeeeeeeeffffffffggggggggghhhhhhhh";


	/*
	//采用这种方式的写入是有问题的，因为每次只能写入结构体大小的字符，如果存入太多字符，会导致程序运行时错误
	ofstream fout("test.txt",ofstream::out|ofstream::binary);
	fout.write(reinterpret_cast<char*>(&t1),sizeof(Test));
	fout.close();
	*/

	//写入文件的内容
	ofstream fout("test.txt",ofstream::out|ofstream::binary);
	fout.write((char*)&t1,sizeof(t1));
	fout.write(t1.b.data(),t1.b.length());
	fout.write(t1.c.data(),t1.c.length());
	fout.close();

	Test t2;
	ifstream fin("test.txt",ifstream::in|ifstream::binary);
	fin.read(reinterpret_cast<char*>(&t2),sizeof(Test));
	cout<<t2.a<<" "<<t2.b<<" "<<t2.c<<endl;
	fin.close();
	return 0;
}
