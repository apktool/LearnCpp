/**
 * @file 10.06.04.cpp
 * @brief 函数对象|类，算法
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
using namespace std;

class PrintObj{
	public:
		void operator() (int n){
			cout<<n<<" ";
		}
};

class AddObj{
	public:
		AddObj(int number):number_(number){}
		void operator() (int& n){
			n+=number_;
		}
	private:
		int number_;
};

class GreaterObj{
	public:
		GreaterObj(int number):number_(number){}

		bool operator() (int cnt){
			return cnt>3;
		}
	private:
		int number_;
};

int main(int argc, char* argv[]){
	map<int, string> mapTest;
	mapTest.insert(map<int,string>::value_type(1,"aaa"));
	mapTest.insert(map<int,string>::value_type(3,"ccc"));
	mapTest.insert(map<int,string>::value_type(2,"bbb"));

	for(map<int,string>::const_iterator it=mapTest.begin();it!=mapTest.end();++it){
		cout<<it->first<<" | "<<it->second<<endl;
	}

	//--------------------------------------
	
	int a[]={1,2,3,4,5};
	vector<int> v(a,a+5);

	for_each(v.begin(),v.end(),PrintObj());
	cout<<endl;

	for_each(v.begin(),v.end(),AddObj(5));
	for_each(v.begin(),v.end(),PrintObj());
	cout<<endl;

	cout<<count_if(a,a+5,GreaterObj(3))<<endl;
	return 0;
}
