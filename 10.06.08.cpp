/**
 * @file 10.06.08.cpp
 * @brief IO流迭代器|ostream_iterator,istream_iterator
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

using namespace std;

int main(int argc, char* argv[]){
	int a[]={1,2,3,4,5};
	vector<int> v(a,a+5);

	copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
	cout<<endl;

	vector<int> v2;
	copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter(v2));
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	return 0;
}
