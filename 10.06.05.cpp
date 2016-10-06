/**
 * @file 10.06.05.cpp
 * @brief 函数适配器
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>

using namespace std;

//统计奇数元素的个数
bool IsOdd(int cnt);
bool check(int num);

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};
	vector<int> v(a,a+5);

	cout<<count_if(v.begin(),v.end(),IsOdd)<<endl;

	//统计奇数元素的个数
	//bind2nd将二元函数对象modulus转换为一元函数对象
	//bind2nd(op,value)(param)相当于op(param,value)
	cout<<count_if(v.begin(),v.end(),bind2nd(modulus<int>(),2))<<endl;

	//统计大于2的元素个数
	//bind1st(op,value)(param)相当于op(value,param)
	cout<<count_if(v.begin(),v.end(),bind1st(less<int>(),2))<<endl;

	//同于大于3的元素个数
	vector<int>::iterator it;
	it=find_if(v.begin(),v.end(),not1(ptr_fun(check)));
	if(it!=v.end()){
		cout<<*it<<endl;
	}
	return 0;
}

bool IsOdd(int cnt){
	return cnt%2==1;
}

bool check(int num){
	return num<3;
}
/*
 *
 * 函数适配器用于特化和扩展一元和二元函数对象，可以分为如下两类
 * - 绑定器：将一个操作数绑定到给定值而将二元函数对象转换为一元函数对象
 *   		 bind1st, bind2nd
 * - 求反器：将谓词函数对象的真值求反
 *			 not1, not2
 */
