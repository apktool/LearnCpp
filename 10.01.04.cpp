/**
 * @file 10.01.04.cpp
 * @brief sstringstream|string和double之间的类型转换
 * @author LiWenGang
 * @date 2016-10-01
 */
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

string dtostr(double x);//将double型转换为string类型
double strtod(const string& str);//将string类型转换为double型

int main(int argc,char* argv[]){
	double x=10.01;
	string str=dtostr(x);
	cout<<str<<endl;

	string ch="10.01";
	double y=strtod(ch);
	cout<<y<<endl;
	
	return 0;
}

string dtostr(double x){
	ostringstream os;
	os<<x;
	return os.str();
}

double strtod(const string& str){
	istringstream is(str);
	double val;
	is>>val;
	return val;
}
