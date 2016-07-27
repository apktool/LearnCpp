/**
 * @file 7.27.03.cpp
 * @brief 空类默认产生的成员
 * @author LiWenGang
 * @date 2016-07-27
 */
#include<iostream>
using std::cout;
using std::endl;

class Empty{
	public:
		Empty* operator&();
		const Empty* operator&() const;
};

int main(int argc, char* argv[]){
	Empty a;
	Empty*p=&a;		//等价于e.operator&();
	cout<<(void*)p<<endl;
	cout<<(void*)&a<<endl;	

	const Empty b;
	const Empty* q=&b;
	cout<<(void*)q<<endl;
	cout<<(void*)&b<<endl;	
	return 0;
}

Empty* Empty::operator&(){
	return this;
}

const Empty* Empty::operator&() const{
	return this;
}

/*
 * 空类默认产生的成员:
 *
 * class Empty { };
 * Empty(); 			// 默认构造函数
 * Empty( const Empty& );	// 默认拷贝构造函数
 * ~Empty(); 			// 默认析构函数
 * Empty& operator=( const Empty& );  // 默认赋值运算符
 * Empty* operator&();		               // 取址运算符
 * const Empty* operator&() const;	    // 取址运算符 const
 *
 * 空类的所占内存大小为1KB
 */
