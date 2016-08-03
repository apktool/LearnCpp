/**
 * @file 8.02.07.cpp
 * @brief 赋值运算符重载(=)|String
 * @author LiWenGang
 * @date 2016-08-03
 */
#include<iostream>
#include<cstring>
using std::cout;
using std::endl;

class String{
	public:
		String();
		~String();
		explicit String(const char* str);
		String(const String& obj);
		String& operator= (const String& obj);
		String& operator= (const char* str);
		void DisPlay();
	private:
		char* m_str;

};

int main(int argc, char* argv[]){
	String obj("hello world");
	obj.DisPlay();

	String obj1(obj);
	obj1.DisPlay();

	String obj2=obj;
	obj2.DisPlay();

	String obj3;
	obj3="hello latex";
	obj3.DisPlay();
	return 0;
}

String::String(){
	cout<<"default constructor"<<endl;
}

String::~String(){
	delete[] m_str;
}

String::String(const char* str){
	int len=strlen(str)+1;
	m_str=new char(len);
	memset(m_str,0,len);
	strcpy(m_str,str);
}

String::String(const String& obj){
	int len=strlen(obj.m_str)+1;
	m_str=new char(len);
	memset(m_str,0,len);
	strcpy(m_str,obj.m_str);

}

String& String::operator= (const String& obj){
	if(m_str==obj.m_str){
		return *this;
	}
	int len=strlen(obj.m_str);
	m_str=new char(len);
	memset(m_str,0,len);
	strcpy(m_str,obj.m_str);
	return *this;
}

String& String::operator= (const char* str){
	int len=strlen(str)+1;
	m_str=new char(len);
	memset(m_str,0,len);
	strcpy(m_str,str);
	return *this;
}

void String::DisPlay(){
	cout<<m_str<<endl;
}
