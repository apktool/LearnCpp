/**
 * @file 8.03.01.cpp
 * @brief 运算符重载|[]|+
 * @author LiWenGang
 * @date 2016-08-03
 */
#include<iostream>
#include<cstring>
using std::cout;
using std::endl;

class String{
	friend String operator+ (const String& obj1, const String& obj2);
	public:
		String();
		~String();
		explicit String(const char* str);
		String(const String& obj);

		String& operator= (const String& obj);
		String& operator= (const char* str);

		char& operator[] (const unsigned int index);
		const char& operator[] (const unsigned int index) const;

		bool operator! () const;

		void DisPlay() const;
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

	String obj4("xxxxx");
	bool notempty;
	notempty=!obj4;
	cout<<notempty<<endl;

	char ch=obj[0];
	cout<<ch<<endl;
	
	const String obj5("hello c++");
	ch=obj[0];
	cout<<ch<<endl;
	//obj5[0]='H';	//const修饰的类型不允许被修改，为了防止修改，引入了由const对[]限制的再次重载
	obj5.DisPlay();

	String obj6=obj5+obj4;
	obj6.DisPlay();
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

char& String::operator[] (const unsigned int index){
	return const_cast<char&>(static_cast<const String&>(*this)[index]); //等价于调用下面的函数
	//return m_str[index];	//上述语句等价于该条语句
}

const char& String::operator[] (const unsigned int index) const{
	return m_str[index];
}
bool String::operator!() const{
	return strlen(m_str)!=0;
}

String operator+ (const String& obj1, const String& obj2){
	int len=strlen(obj1.m_str)+strlen(obj2.m_str)+1;
	char *newchar=new char(len);	
	memset(newchar,0,len);
	strcpy(newchar,obj1.m_str);
	strcat(newchar,obj2.m_str);

	String tmp(newchar);
	delete newchar;
	return tmp;
}

void String::DisPlay() const{
	cout<<m_str<<endl;
}
