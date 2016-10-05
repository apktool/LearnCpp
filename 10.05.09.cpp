/**
 * @file 10.05.09.cpp
 * @brief 数值算法|accumulate
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;

void print_element(int n);
int mult(int a, int b);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};
	vector<int> v(a,a+5);

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	//累加
	cout<<accumulate(v.begin(),v.end(),0)<<endl;

	//累乘
	cout<<accumulate(v.begin(),v.end(),1,mult)<<endl;
	return 0;
}

void print_element(int n){
	cout<<n<<" ";
}

int mult(int a, int b){
	return a*b;
}
