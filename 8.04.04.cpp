/**
 * @file 8.04.04.cpp
 * @brief string|example
 * @author LiWenGang
 * @date 2016-08-04
 */
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[]){
	string strinfo=" //*---Hello world---*//";
	string strset="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	string::size_type first=strinfo.find_first_of(strset);//从前向后查找strinfo在strset中存在的第一个字符，若查找到，返回该位置
	if(first==string::npos){
		cout<<"not find any characters"<<endl;
	}
	string::size_type last=strinfo.find_last_of(strset);//从后向前查找strinfo在strset中存在的第一个字符，若查找到，返回该位置
	if(last==string::npos){
		cout<<"not find any characters"<<endl;
	}
	cout<<strinfo.substr(first,last-first+1)<<endl;
	return 0;
}
