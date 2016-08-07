/**
 * @file 8.07.02.cpp
 * @brief 虚继承对C++对象内存模型造成的影响
 * @note 这部分个人不是很明白
 * @author LiWenGang
 * @date 2016-08-07
 */
#include<iostream>
using namespace std;

class BB{
	public:
		int bb_;
};

class B1:virtual public BB{
	public:
		int b1_;
};

class B2:virtual public BB{
	public:
		int b2_;
};

class DD:public B1, public B2{
	public:
		int dd_;
};

int main(int argc, char* argv[]){
	cout<<sizeof(BB)<<endl;
	cout<<sizeof(B1)<<endl;
	cout<<sizeof(DD)<<endl;

	//----------------------------

	B1 objb1;
	cout<<&objb1<<endl;
	cout<<&objb1.b1_<<endl;
	cout<<&objb1.bb_<<endl;

	int **p=(int**)&objb1;
	cout<<p[0][0]<<endl;
	cout<<p[0][1]<<endl;

	//----------------------------

	DD objdd;
	cout<<&objdd<<endl;
	cout<<&objdd.bb_<<endl;
	cout<<&objdd.b1_<<endl;
	cout<<&objdd.b2_<<endl;
	cout<<&objdd.dd_<<endl;

	int **q=(int**)&objdd;
	cout<<q[0][0]<<endl;
	cout<<q[0][1]<<endl;
	cout<<q[2][0]<<endl;
	cout<<q[2][1]<<endl;

	return 0;
}

/*
 * vbptr:虚基类表指针
 * vbtl:虚基类表
 *      B1      vbtl
 * ->  -----    -----
 *    |vbptr|->|  0  |	本类地址与虚基类表指针地址的差
 *    |-----|   -----
 * B1 | b1_ |  |  8  |  虚基类地址与虚基类表指针地址的差
 *    |-----|   -----
 * BB | bb_ |
 *     -----
 *
 *      DD      vbtl
 * ->  -----    ------
 *    |vbptr|->|  0   |	本类地址与虚基类表指针地址的差
 * B1 |-----|   ------
 *    | b1_ |  |  20  | 虚基类地址与虚基类表指针地址的差
 *    |-----|   ------
 *    |vbptr|->|  0   |	本类地址与虚基类表指针地址的差
 * B2 |-----|   ------
 *    | b2_ |  |  12  | 虚基类地址与虚基类表指针地址的差
 *    |-----|   -----
 * DD | dd_ |
 *     -----
 * BB | bb_ |
 *     -----
 */
