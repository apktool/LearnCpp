/**
 * @file 10.04.01.cpp
 * @brief vector|capacity(),size()
 * @author LiWenGang
 * @date 2016-10-04
 */
#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char* argv[]){
	vector<int> v;
	
	v.push_back(1);
	cout<<v.size()<<" | "<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.size()<<" | "<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.size()<<" | "<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.size()<<" | "<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.size()<<" | "<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.size()<<" | "<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.size()<<" | "<<v.capacity()<<endl;
	v.push_back(1);
	cout<<v.size()<<" | "<<v.capacity()<<endl;
	return 0;
}

/*
 * vector
 * 增长capacity增长时候并不是呈线性增长，而是空间不足时，增长为原来的两倍；如果空间足够，则空间大小不变。
 * 当然在不同平台下面的实现可能不一样。比如windows可能会一次增长原来的一半，即容量增长为原来的1.5倍
 * capacity()>=size()
 * 即vector当前能够容纳的元素的个数会大于vector中当前存储的元素个数
 */
