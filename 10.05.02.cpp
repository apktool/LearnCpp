/**
 * @file 10.05.02.cpp
 * @brief 非变动性算法|for_each,min_element,max_element,find_if
 * @author LiWenGang
 * @date 2016-10-05
 */
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void print_element(int cnt);
bool greater_than_3(int cnt);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};

	vector<int> v(a,a+5);
	vector<int>::iterator it;

	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	it=min_element(v.begin(),v.end());
	cout<<"the minnest number:"<<*it<<endl;

	it=max_element(v.begin(),v.end());
	cout<<"the maxest number:"<<*it<<endl;

	it=find(v.begin(),v.end(),3);
	if(it!=v.end()){
		cout<<"the position is "<<it-v.begin()<<endl;
	}else{
		cout<<"Not find the number"<<endl;
	}

	it=find_if(v.begin(),v.end(),greater_than_3);
	if(it!=v.end()){
		cout<<it-v.begin()<<endl;
	}else{
		cout<<"not find"<<endl;
	}

	return 0;
}

void print_element(int cnt){
	cout<<cnt<<" ";
}

bool greater_than_3(int cnt){
	return cnt>3;
}
/*
 * 容器中的区间一般都是半闭半开区间，即左边是闭区间，右边是开区间
 */
