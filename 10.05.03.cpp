/**
 * @file 10.05.03.cpp
 * @brief 变动性算法|for_each,copy,copy_backward
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

void print_element(int cnt);
void add_3(int& n);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};
	vector<int> v(a,a+5);

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	for_each(v.begin(),v.end(),add_3);
	for(const auto& i:v){
		cout<<i<<" ";
	}
	cout<<endl;

	list<int> lst(12);

	for_each(lst.begin(),lst.end(),print_element);
	cout<<endl;

	//从前往后拷贝
	copy(v.begin(),v.end(),lst.begin());
	for_each(lst.begin(),lst.end(),print_element);
	cout<<endl;

	//从后往前拷贝
	copy_backward(v.begin(),v.end(),lst.end());
	for_each(lst.begin(),lst.end(),print_element);
	cout<<endl;

	return 0;
}

void print_element(int cnt){
	cout<<cnt<<" ";
}

void add_3(int& n){
	n+=3;
}

/*
 * for_each是否是变动性算法，取决于第三个参数是否会修改容器里面的值
 */
