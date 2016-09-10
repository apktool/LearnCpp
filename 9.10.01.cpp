/**
 * @file 9.10.01.cpp
 * @brief String | 8.03.01.cpp
 * @author LiWenGang
 * @date 2016-09-10
 */
#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::istream;

class String{
	friend ostream& operator<< (ostream& os, const String& obj);
	friend istream& operator>> (istream& os, String& obj);
	public:
		String(){};

		String(const char* str);
		String(const String& obj);

		String operator+ (const String& obj);
		String& operator= (const String& obj);
		String& operator+= (const String& obj);

		bool operator== (const String &obj);
		bool operator! () const;

		char& operator[] (const unsigned int index);
		const char& operator[] (const unsigned int index) const;

		~String();
		void Display();
	private:
		char* str_;
};

int main(int argc, char* argv[]){
	String s1("string s1");
	s1.Display();

	String s2(s1);
	s2.Display();

	String s3="string s3";
	s3.Display();

	String s4=s1;
	s4.Display();

	String s5="string s5";
	s5+=" s5";
	s5.Display();

	String s6=s1+s5;
	s6.Display();

	cout<<s6<<endl;

	String s7;
	cin>>s7;
	cout<<s7<<endl;

	String s8("string s8");
	s1==s3?cout<<"equal"<<endl:cout<<"no equal"<<endl;

	cout<<s8[2]<<endl;
	return 0;
}

String::String(const char* str){
	//cout<<"String::String(const char* str)"<<endl;
	int len=strlen(str)+1;
	str_=new char[len];
	memset(str_,0,len);
	strcpy(str_,str);
}

String::String(const String& obj){
	//cout<<"String::String(const String& obj)"<<endl;
	int len=strlen(obj.str_)+1;
	str_=new char[len];
	memset(str_,0,len);
	strcpy(str_,obj.str_);
}

String String::operator+(const String& obj){
	//cout<<"String String::operator+(const String& obj)"<<endl;
	int len=strlen(str_)+strlen(obj.str_)+1;
	char* newstr=new char[len];
	memset(newstr,0,len);
	strcpy(newstr,str_);
	strcat(newstr,obj.str_);

	return newstr;
}

String& String::operator= (const String& obj){
	//cout<<"String& String::operator= (const String& obj)"<<endl;
	int len=strlen(obj.str_)+1;
	str_=new char[len];
	memset(str_,0,len);
	strcpy(str_,obj.str_);
	return *this;
}

String& String::operator+= (const String& obj){
	//cout<<" String& String::operator+= (const String& obj)"<<endl;
	int len=strlen(str_)+strlen(obj.str_)+1;
	char* newstr=new char[len];
	memset(newstr,0,len);
	strcpy(newstr,str_);
	strcat(newstr,obj.str_);

	delete[] str_;
	str_=newstr;

	return *this;
}

ostream& operator<< (ostream& os, const String& obj){
	//cout<<"ostream& operator<< (ostream& os, const String& obj)"<<endl;
	os<<obj.str_;
	return os;
}

istream& operator>> (istream& is, String& obj){
	//cout<<"istream& operator>> (istream& is, String& obj)"<<endl;
	char tmp[1024];
	is>>tmp;
	obj=tmp;
	return is;
}

bool String::operator== (const String& obj){
	//cout<<"bool String::operator== (const String& obj)"<<endl;
	if(strlen(str_)!=strlen(obj.str_)){
		return false;
	}
	return strcmp(str_,obj.str_)==0?true:false;
}

bool String::operator! () const{
	return strlen(str_)!=0;
}

char& String::operator[] (const unsigned int index){
	return str_[index];
}

const char& String::operator[] (const unsigned int index) const{
	return str_[index];
}

String::~String(){
	delete[] str_;
}

void String::Display(){
	cout<<str_<<endl;
}
