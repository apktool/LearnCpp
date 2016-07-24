/**
 * @file 7.24.03.cpp
 * @brief 作用域标识符::
 * @author LiWenGang
 * @date 2016-07-24
 */
#include<iostream>
using namespace std;

int var=100;
int main(int argc, char* argv[]){
	int var=50;
	cout<<var<<endl;
	cout<<::var<<endl;
	return 0;
}
