/**
 * @file 10.05.01.cpp
 * @brief 迭代器|vector,list
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(int argc, char* argv[]){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	//迭代器
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;

	//反向迭代器
	vector<int>::reverse_iterator ti;
	for(ti=v.rbegin();ti!=v.rend();++ti){
		cout<<*ti<<" ";
	}
	cout<<endl;

	//--------------------------------------------------

	list<int> lst;
	lst.push_back(5);
	lst.push_back(6);
	lst.push_back(7);

	list<int>::iterator it2;
	for(it2=lst.begin();it2!=lst.end();++it2){
		cout<<*it2<<" ";
	}
	cout<<endl;

	return 0;
}

/*
 * 每种容器都实现了自己的迭代器；
 * 有些容器还实现了仅属于自己的迭代器
 */
