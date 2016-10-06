/**
 * @file 10.06.06.cpp
 * @brief IO流迭代器
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void ShowVec(vector<int> v);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};
	vector<int> v(a,a+5);

	//标准库内部实现的时候，会调用push_back，因此传递给back_insert_iterator的容器必须有push_back操作才行。
	back_insert_iterator<vector<int>> bii(v);
	*bii=6;//也可以是bii=6
	ShowVec(v);

	vector<int> v2;
	back_insert_iterator<vector<int>> bii2(v2);
	copy(v.begin(),v.end(),bii2);
	ShowVec(v2);

	back_inserter(v)=7;
	ShowVec(v);

	copy(v.begin(),v.end(),back_inserter(v2));
	ShowVec(v2);

	return 0;
}

void ShowVec(vector<int> v){
	for(const auto& w:v){
		cout<<w<<" ";
	}
	cout<<endl;
}
