/**
 * @file 9.30.06.cpp
 * @brief fstream
 * @author LiWenGang
 * @date 2016-10-01
 */
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Test{
	int a;
	int b;
};

int main(int argc, char* argv[]){
	/*
	fstream fout("temp.cc");
	fout<<"abc"<<" "<<200;
	*/

	/*
	ifstream fin("temp.cc");
	string s;
	int n;
	fin>>s>>n;
	
	cout<<s<<" "<<n<<endl;
	*/
	//-----------------------------
	/*
	char ch;
	for(int i=0;i!=26;++i){
		ch='A'+i;
		fout.put(ch);
	}
	fout.close();
	*/
	//-----------------------------
	/*
	ifstream fin("temp.cc");
	 while(fin.get(ch)){
		cout<<ch;
	 }
	 cout<<endl;
	 */

	/*
	//binary那一项可以不用，以文本方式打开，但是写入的字符仍然是以二进制的方式写入文件
	Test test{100,200};
	ofstream fout("temp.cc",ofstream::out | ofstream::binary);
	fout.write(reinterpret_cast<char*>(&test),sizeof(Test));
	fout.close();

	Test test2;
	ifstream fin("temp.cc",ifstream::in | ifstream::binary);
	fin.read(reinterpret_cast<char*>(&test2),sizeof(Test));
	cout<<test2.a<<" "<<test2.b<<endl;
	*/

	//尽管是以二进制模式打开文件，但是<<却是以文本方式写入的
	ofstream fout("temp.cc",ofstream::out | ofstream::binary);
	fout<<"abc"<<200;

	
	return 0;
}
/*
 * 以文本方式打开文件，写入字符的时候，遇到\n会做转换,写入\r不做转换
 * 如果以二进制方式打开文件写入字符的时候，\n不会做转换
 *
 * windows平台，\n 转变为 \r\n
 * linux平台，保留不变
 * mac系统，\n 转变为 \r
 *
 * 以文本方式打开文件，也可以写入二进制数据
 * 以二进制方式打开文件，也可以写入文本；
 *
 * 写入的数据是二进制还是文本，与打开的方式无关，与使用的函数有关
 * 要写入二进制数据，应该用write，读取应该使用read
 */
