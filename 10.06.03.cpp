/**
 * @file 10.06.03.cpp
 * @brief 函数对象
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>

using namespace std;

class FunObj{
	public:
		void operator() (){
			cout<<"hello world"<<endl;
		}
		void operator() (int cnt){
			cout<<cnt<<endl;
		}
};

int main(int argc, char* argv[]){
	FunObj obj;
	obj();//仿函数
	obj(88);

	FunObj()();
	return 0;
}
