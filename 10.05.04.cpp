/**
 * @file 10.05.04.cpp
 * @brief 变动性算法|transform
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

int fun(int a);
int fun2(int a, int b);
void print_element(int cnt);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};
	vector<int> v(a,a+5);
	list<int> lst(5);
	list<int> str(2);
	
	transform(v.begin(),v.end(),lst.begin(),fun);
	for_each(lst.begin(),lst.end(),print_element);
	cout<<endl;

	transform(v.begin(),v.begin()+1,v.end()-2,str.begin(),fun2);
	for_each(str.begin(),str.end(),print_element);
	cout<<endl;
	return 0;
}

void print_element(int cnt){
	cout<<cnt<<" ";	
}

int fun(int a){
	return 2*a;
}

int fun2(int a, int b){
	return a+b;
}
