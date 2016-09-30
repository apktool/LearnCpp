/**
 * @file 9.30.05.cpp
 * @brief ifstream|constexpr
 * @author LiWenGang
 * @date 2016-09-30
 */
#include<cassert>
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char* argv[]){
	ifstream fin("temp.cc");
	assert(fin);
	fin.close();

	constexpr int n=5;
	cout<<hex<<n<<endl;

	int A[n]={1,2,3,4,5};
	for(auto& i:A){
		cout<<A[i-1]<<endl;
	}
	return 0;
}


/*
 * ofstream:以out（写）模式打开，如果文件不存在，则创建
 * ifstream:以in（读）模式打开，如果文件不存在，并不会创建
 */
