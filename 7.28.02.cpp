/**
 * @file 7.28.02.cpp
 * @brief 类大小计算
 * @author LiWenGang
 * @date 2016-07-28
 */
#include<iostream>
using std::cout;
using std::endl;

class Test{
	public:
		Test();
		~Test();
	private:
		int m_num;
		static int m_cnt;
};

int main(int argc, char* argv[]){
	cout<<sizeof(Test)<<endl;
	return 0;
}

/*
 * 类大小计算与结构体对齐原则一致
 * 类的大小与数据成员有关与成员函数无关
 * 类的大小与静态数据成员无关
 * 虚函数对类的大小的影响
 * 虚继承对类的大小的影响
 */
