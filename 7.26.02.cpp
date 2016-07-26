/**
 * @file 7.26.02.cpp
 * @brief 构造函数|数组|new
 * @author LiWenGang
 * @date 2016-07-26
 */
#include<iostream>
using namespace std;

class Test{
	public:
		Test();
		Test(int num);
		~Test();
	private:
		int m_num;
};

int main(int argc, char* argv[]){
	Test t1;
	Test t2(10);
	Test t3[2]={20,30};

	Test* t4=new Test(40);
	delete t4;

	Test* t5=new Test[2];
	delete[] t5;

	return 0;
}

Test::Test(){
	m_num=0;
	cout<<"Initializing default"<<endl;
}

Test::Test(int num){
	m_num=num;
	cout<<"num="<<num<<endl;
}

Test::~Test(){
	cout<<"Destroying "<<m_num<<endl;
}
