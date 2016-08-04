/**
 * @file 8.04.06.cpp
 * @brief vector|成员函数
 * @author LiWenGang
 * @date 2016-08-04
 */
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char* argv[]){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	cout<<v.back()<<endl;	//打印最后一个元素

	for(unsigned int i=0;i!=v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	v.erase(v.begin()+1);	//移除第1个元素，从0开始编号
	v.erase(v.begin(),v.begin()+2);	//移除第0到第2个元素

	for(vector<int>::iterator it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}

/*
 * STL六大组件：
 * 容器、迭代器、算法、函数对象、适配器、内存分配器
 */
