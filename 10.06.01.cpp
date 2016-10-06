/**
 * @file 10.06.01.cpp
 * @brief 变序算法|next_permutation
 * @author LiWenGang
 * @date 2016-10-06
 */

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void print_element(int cnt);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4};
	vector<int> v(a,a+4);

	for_each(v.begin(),v.end(),print_element);
	cout<<endl;

	//打印1,2,3,4的全排列
	while(next_permutation(v.begin(),v.end())){
		for_each(v.begin(),v.end(),print_element);
		cout<<endl;
	}
	return 0;
}

void print_element(int cnt){
	cout<<cnt<<" ";
}
