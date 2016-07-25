/**
 * @file 7.25.04.cpp
 * @brief 嵌套类
 * @author LiWenGang
 * @date 2016-07-25
 */
#include<iostream>
using namespace std;

class Outer{
	private:
		class Inner{
			public:
				void Fun(){
					cout<<"Inner::Fun ..."<<endl;
				}
		};
	public:
		Inner obj;
		void Fun();
};

int main(int argc, char* argv[]){
	Outer o;
	o.Fun();
	return 0;
}

void Outer::Fun(){
	cout<<"Outer::Fun ..."<<endl;
	obj.Fun();
}
