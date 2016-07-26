/**
 * @file 7.26.03.cpp
 * @brief 转换构造函数,explicit
 * @author LiWenGang
 * @date 2016-07-26
 */
#include<iostream>
using namespace std;

class Test{
	public:
		Test();
		//explicit Test(int num);
		Test(int num);
		~Test();
	private:
		int m_num;
};

int main(int argc, char* argv[]){
	Test t(10);
	t=20;	/*
			 * 将20这个整数赋值给t对象
			 * 1. 调用转换构造函数将20这个整数转化成类类型（生成一个临时对象）
			 * 2. 将临时对象赋值给t对象，调用的是“=”运算符
			 * 3. 赋值成功之后，会迅速将该临时对象销毁，即调用一次析构函数
			 */


	Test s=30;  // 等价于Test(30)，这里的“=”并不是运算符，
	s=40;		//赋值操作
	return 0;
}

Test::Test(){
	m_num=10;
	cout<<"Initializing default"<<endl;
}

Test::Test(int num){
	m_num=num;
	cout<<"Initializing "<<m_num<<endl;
}

Test::~Test(){
	cout<<"Destroy "<<m_num<<endl;
}

/*
 * explicit:
 * 编译器不会把声明为explicit的构造函数用于隐式转化，它只能在程序代码中显式创建对象
 */
