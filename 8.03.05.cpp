/**
 * @file 8.03.05.cpp
 * @brief 运算符重载|new|delete
 * @author LiWenGang
 * @date 2016-08-03
 */
#include<iostream>
using std::cout;
using std::endl;

class Test{
	public:
		Test();
		Test(const int num);
		Test(const Test& obj);

		void* operator new(size_t size);
		void operator delete(void* p);
		void operator delete(void* p, size_t size);

		void Display();
	private:
		int m_num;
};

int main(int argc, char* argv[]){
	Test* obj=new Test(100);	//new operator = operater new + 构造函数的调用
	delete obj;
	obj->Display();
/*
	char chunk[10];
	Test* obj1=new(chunk) Test(200);	//placement new = operater new + 构造函数的调用
	obj1->Display();					//此处实际上比不开辟新的内存，直接使用chunk这块内存区域
	
	//Test* obj2=(Test*)chunk;			//与下述语句等价，实现类型强制转化
	Test* obj2=reinterpret_cast<Test*>(chunk);
	obj2->Display();
*/	return 0;
}

Test::Test(const int num):m_num(num){
	cout<<"constructor| Test::Test(const int num)"<<endl;
}

Test::Test(const Test& obj){
	cout<<"constructor|Test::Test(const Test& obj)"<<endl;
}


void* Test::operator new(size_t size){
	cout<<"new|void* Test::operator new(size_t size)"<<endl;
	void* p=malloc(size);
	return p;
}

void Test::operator delete(void* p){
	cout<<"delete|void Test::operator delete(void* p)"<<endl;
	free(p);
}

void Test::operator delete(void* p, size_t size){
	cout<<"void Test::operator delete(void* p, size_t size)"<<endl;
	free(p);
}

void Test::Display(){
	cout<<m_num<<endl;
}
/*
 * new有三种用法：
 * new operator
 * operator new
 * placement new
 */
