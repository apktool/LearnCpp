/**
 * @file 8.04.01.cpp
 * @brief string|构造函数
 * @author LiWenGang
 * @date 2016-08-04
 */
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	string s1;
	string s2("abcdefghijk");
	cout<<s2<<endl;
	
	string s3("abcdefgh",4);
	cout<<s3<<endl;

	string s4(s3,2,4);
	cout<<s4<<endl;

	string s5(4,'c');
	cout<<s5<<endl;

	string::iterator first=s2.begin()+1;
	string::iterator second=s2.end();
	string s6(first,second);
	cout<<s6<<endl;

	return 0;
}
/*
 * 标准库类型：
 *
 * string	字符串		char*
 * vector	动态数组	静态数组[]
 * map		key/value	内部是以树的形式存储的O(log2N)
 */
