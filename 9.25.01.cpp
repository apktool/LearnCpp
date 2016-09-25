/**
 * @file 9.25.01.cpp
 * @brief 异常处理
 * @author LiWenGang
 * @date 2016-09-25
 */
#include<iostream>

using std::cout;
using std::endl;

double Divide(double a, double b);

int main(int argc,char* argv[]){
	try{
		cout<<Divide(5.0,1.0)<<endl;
		cout<<Divide(5.0,0.0)<<endl;
	}
	catch(int){
		cout<<"division by zero"<<endl;
	}
}

double Divide(double a, double b){
	if(b==0){
		throw 1;
	}else{
		return a/b;
	}
}
