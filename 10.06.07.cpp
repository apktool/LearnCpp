/**
 * @file 10.06.07.cpp
 * @brief 迭代器|front_insert_iterator, front_inserter
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

void ShowVec(list<int> v);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};
	list<int> l(a,a+5);

	//front_insert_iterator内所传递的容器必须有push_front方法
	front_insert_iterator<list<int>> fii(l);
	fii=0;
	ShowVec(l);

	list<int> l2;
	copy(l.begin(),l.end(),front_inserter(l2));
	ShowVec(l2);
	
	return 0;
}

void ShowVec(list<int> l){
	for(const auto& w:l){
		cout<<w<<" ";
	}
	cout<<endl;
}
