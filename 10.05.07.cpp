/**
 * @file 10.05.07.cpp
 * @brief 变序性算法|rotate；排序算法|sort
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<algorithm>

using namespace std;

void print_element(int n);
bool my_greater(int a, int b);

int main(int argc, char* argv[]){
	int a[]={1,3,2,3,4,5};
	vector<int> v(a,a+6);

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	rotate(v.begin(),v.begin()+2,v.end());

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	sort(v.begin(),v.end());

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	sort(v.begin(),v.end(),my_greater);

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;
	return 0;
}

void print_element(int n){
	cout<<n<<" ";
}

bool my_greater(int a, int b){
	return a>b;
}
