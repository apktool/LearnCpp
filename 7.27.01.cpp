/**
 * @file 7.27.01.cpp
 * @brief 拷贝构造函数分析
 * @author LiWenGang
 * @date 2016-07-27
 */
#include<iostream>
using namespace std;

class Test{
	public:
		Test();
		explicit Test(int num);
		Test(const Test& ob);
		~Test();
	private:
		int m_num;
};

void TestFun1(const Test t);
void TestFun2(const Test& t);
Test TestFun3(const Test& t);
const Test& TestFun4(const Test& t);

int main(int argc, char* argv[]){
	Test t1(10);
	//Test t2(t1);

	//TestFun1(t1);
	//TestFun2(t1);

	//TestFun3(t1);
							/*
							    函数TestFun3会返回一个对象，因为生命周期结束，所以该对象会被重新“赋值”给一个临时对象，但是因为该临时对象没有新的对象接管，所以该临时对象会被立刻销毁；
								即cout出的结果会在析构函数之后
						   */
	//Test t3=TestFun3(t1);
							/*
								此处应当注意，直观的理解是函数TestFun3返回一个对象，然后使用该对象初始化对象t3。但实际上编译器并不是这么做的。
								当TestFun3返回一个对象时，函数TestFun3的生命周期结束，编译器会生成一个临时对象，将TestFun3的返回对象赋值给改临时对象，故会调用一次拷贝构造函数；
								当该临时对象重新“赋值”给对象t3时，编译器实际并没有做“赋值”处理，而是将该临时对象直接重命名为t3，所以并不会调用拷贝构造函数。
								cout出的结果会在析构函数之前
						   */
	//Test t4=TestFun4(t1);
							/*
								此处应当注意，虽然运行结果与TestFun3的结果一致，但是两者的意义是不同的。因为TestFun4的形参和返回值都是引用，因此不会调用拷贝构造函数；
								但是返回的引用在初始化对象t4时会调用一次拷贝构造函数
						   */

	const Test& t5=TestFun4(t1);
							/*
								此处应当注意，因为接收函数TestFun4返回值的变量本身就是引用，因此不会调用拷贝构造函数；
						   */
	cout<<"-----------"<<endl;
	return 0;
}

Test::Test(){
	m_num=0;
	cout<<"Initialization Default Constructor|m_num="<<m_num<<endl;
}

Test::Test(int num){
	m_num=num;
	cout<<"Initialization Constructor|m_num="<<m_num<<endl;
}

Test::Test(const Test& obj){
	cout<<"Initialization Copy Constructor|m_num="<<m_num<<endl;
	m_num=obj.m_num;
}

Test::~Test(){
	cout<<"Initialization Destructor|m_num="<<m_num<<endl;
}

void TestFun1(const Test t){
	/*
	 * 因为形参是对象，因此在使用的时候，会调用一次拷贝构造函数
	 */
}

void TestFun2(const Test& t){
	/*
	 * 因为形参是引用，因此在使用的时候，不会调用一次拷贝构造函数
	 */
}

Test TestFun3(const Test& t){
	/*
	 * 因为返回的是一个对象，该子函数生命周期完结时，系统会生成一个临时对象，故会调用一次拷贝构造函数
	 */
	return t;
}

const Test& TestFun4(const Test& t){
	return t;
}
/*
 * 使用一个对象初始化另一个对象，以值传递的方式传递或返回一个对象等操作会导致调用拷贝构造函数
 * 1. 当函数的形参是类的对象，调用函数时，进行形参与实参结合时使用。这时要在内存新建立一个局部对象，并把实参拷贝到新的对象中。理所当然也调用拷贝构造函数。
 * 2. 当函数的返回值是类对象，函数执行完成返回调用时使用。理由也是要建立一个临时对象中，再返回调用者。
 */
