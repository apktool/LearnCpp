/**
 * @file 10.05.05.cpp
 * @brief 变动性算法|replace,replace_copy,replace_copy_if
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

void print_element(int cnt);
bool fun(int a);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};
	vector<int> v(a,a+5);
	
	//将值为3的元素替换为13
	replace(v.begin(),v.end(),3,13);
	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	//拷贝的过程执行替换，原空间的元素不会发生变化
	list<int> lst(5);
	replace_copy(v.begin(),v.end(),lst.begin(),13,3);
	for_each(v.begin(),v.end(),print_element);
	cout<<endl;
	for_each(lst.begin(),lst.end(),print_element);
	cout<<endl;

	//将lst中小于10的元素替换为0
	replace_copy_if(v.begin(),v.end(),lst.begin(),fun,0);
	for_each(lst.begin(),lst.end(),print_element);
	cout<<endl;
	return 0;
}

void print_element(int cnt){
	cout<<cnt<<" ";	
}

bool fun(int a){
	return a<10;
}
