/**
 * @file 7.27.02.cpp
 * @brief 深拷贝，浅拷贝
 * @author LiWenGang
 * @date 2016-07-27
 */
#include<iostream>
#include<cstring>

using std::cout;
using std::endl;

class String{
	public:
		String(char* str);
		~String();
		String(const String& other);
		void Display();
	private:
		char* m_str;
};

int main(int argc, char* argv[]){
	String str("AAA");
	str.Display();
	//String str1(str);		
							/*
								因为没有提供拷贝构造函数，因此调用的是默认的拷贝构造函数
								而系统提供的默认拷贝构造函数实施的是浅拷贝，即str1.m_str=str.m_str
								即不同对象的两个m_str指针会指向同一块内存，但是函数生命周期结束时会调用两次析构函数来释放内存，
								即同一块内存会被释放两次，从而导致运行时错误
								为了避免这种错误，需要自己定义拷贝构造函数，实施深拷贝便可
							*/
	String str2(str);
	str2.Display();			
							/*
							 * 这里自己定义了拷贝构造函数，实施深拷贝，因此不会出现运行时错误。
						     */


	String str3=str2;
	str3.Display();
	return 0;
}

String::String(char* str){
	int len=strlen(str)+1;
	m_str=new char[len];
	memset(m_str,0,len);
	strcpy(m_str,str);
}

String::~String(){
	delete[] m_str;
}

String::String(const String& other){
	int len=strlen(other.m_str)+1;
	m_str=new char[len];
	memset(m_str,0,len);
	strcpy(m_str,other.m_str);
}

void String::Display(){
	cout<<m_str<<endl;
}
