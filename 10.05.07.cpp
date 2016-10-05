/**
 * @file 10.05.07.cpp
 * @brief 变序性算法|rotate
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<algorithm>

using namespace std;

void print_element(int n);

int main(int argc, char* argv[]){
	int a[]={1,3,2,3,4,5};
	vector<int> v(a,a+6);

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	rotate(v.begin(),v.begin()+2,v.end());

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;
	return 0;
}

void print_element(int n){
	cout<<n<<" ";
}
