/**
 * @file 8.04.05.cpp
 * @brief string|去除空格
 * @author LiWenGang
 * @date 2016-08-04
 */
#include<iostream>
#include<string>
using namespace std;

class StringUtil{
	public:
		static void LTrim(string& str);
		static void RTrim(string& str);
		static void Trim(string& str);
};

int main(int argc, char* argv[]){
	string str;
	str="  Hello wolrd  ";
	StringUtil::LTrim(str);
	cout<<"["<<str<<"]"<<endl;

	str="  Hello wolrd  ";
	StringUtil::RTrim(str);
	cout<<"["<<str<<"]"<<endl;

	str="  Hello wolrd  ";
	StringUtil::Trim(str);
	cout<<"["<<str<<"]"<<endl;

	return 0;
}

void StringUtil::LTrim(string& str){
	string drop=" \t";
	str.erase(0,str.find_first_not_of(drop));
}

void StringUtil::RTrim(string& str){
	string drop=" \t";
	str.erase(str.find_last_not_of(drop)+1,string::npos);
}

void StringUtil::Trim(string& str){
	LTrim(str);
	RTrim(str);

}
