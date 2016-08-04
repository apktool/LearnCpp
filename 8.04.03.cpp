/**
 * @file 8.04.03.cpp
 * @brief string|成员函数
 * @author LiWenGang
 * @date 2016-08-04
 */
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[]){
	string s1="abc";
	cout<<s1<<endl;

	s1[1]='B';
	cout<<s1<<endl;

	string s2=s1+"def"+"ghi";	//前面两个必须有一个是对象
	cout<<s2<<endl;

	s1==s2?cout<<"Same"<<endl:cout<<"diffrence"<<endl;
	return 0;
}
