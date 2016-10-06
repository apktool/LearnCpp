/**
 * @file 10.06.12.cpp
 * @brief vector|删除指定元素
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char* argv[]){
	int a[]={3,1,2,3,5};
	vector<int> v(a,a+5);

	/*
	//这种方式删除错误，因为it被erase掉了，造成it成为了空指针，不能++
	for(vector<int>::iterator it=v.begin();it!=v.end();++it){
		if(*it==3){
			v.erase(it);
		}else{
			cout<<*it<<" ";
		}
	}
	cout<<endl;
	 */

	for(vector<int>::iterator it=v.begin();it!=v.end();){
		if(*it==3){
			it=v.erase(it);
		}else{
			cout<<*it<<" ";
			++it;
		}
	}
	cout<<endl;
	return 0;
}
