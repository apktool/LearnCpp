/**
 * @file 10.05.08.cpp
 * @brief 已序区间算法|lower_bound,upper_bound
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<algorithm>

using namespace std;

void print_element(int n);

int main(int argc, char* argv[]){
	int a[]={1,10,10,14,15,16};
	vector<int> v(a,a+6);

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	vector<int>::iterator it;
	it=lower_bound(v.begin(),v.end(),10);
	if(it!=v.end()){
		cout<<it-v.begin()<<endl;
	}

	it=upper_bound(v.begin(),v.end(),10);
	if(it!=v.end()){
		cout<<it-v.begin()<<endl;
	}
	return 0;
}

void print_element(int n){
	cout<<n<<" ";
}

/*
 * lower_bound() 搜索第一个“大于等于给定值”的元素
 * 如果要插入给定值，保持区间有序性，返回第一个可插入的位置
 * upper_bound() 搜索第一个“大于给定值”的元素
 * 如果要插入给定值，保持区间有序性，返回最后可插入的位置
 *
 * 内部采用的是二分法查找的方式实现
 */
