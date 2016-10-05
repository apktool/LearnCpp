/**
 * @file 10.05.06.cpp
 * @brief 移除性算法|remove
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

	//remove并不做物理删除，仅从逻辑上删除；要想实现物理删除可以配合erase使用
	//remove(v.begin(),v.end(),3);//删除3
	v.erase(remove(v.begin(),v.end(),3),v.end());
	for_each(v.begin(),v.end(),print_element);
	cout<<endl;
	return 0;
}

void print_element(int n){
	cout<<n<<" ";
}

/*
 * 首先查找给定值第一个位置，然后遍历后面的元素，将非移除元素拷贝到前面，覆盖前面的元素
 */
