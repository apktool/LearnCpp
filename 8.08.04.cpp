/**
 * @file 8.08.04.cpp
 * @brief 虚函数与对象切割|overload,overwrite,override
 * @author LiWenGang
 * @date 2016-08-08
 */
#include<iostream>
using namespace std;

class CObject{
	public:
		virtual void Serialize();
};

class CDocument:public CObject{
	public:
		void func();
		virtual void Serialize();
		int data1_;
};

class CMyDoc:public CDocument{
	public:
		virtual void Serialize();
		int data2_;
};

int main(int argc, char* argv[]){
	CMyDoc mydoc;
	CMyDoc* pmydoc=new CMyDoc;

	cout<<"#1 testing"<<endl;
	mydoc.func();

	cout<<"#2 testing"<<endl;
	((CDocument*)(&mydoc))->func();
	
	cout<<"#3 testing"<<endl;
	pmydoc->func();

	cout<<"#4 testing"<<endl;
	((CDocument)mydoc).func();	//mydoc对象强制转换为CDocument对象，向上转型
								//完全将派生类对象转换成了基类对象
	return 0;
}

void::CObject::Serialize(){
	cout<<"CObject::Serialize"<<endl;
}

void CDocument::func(){
	cout<<"CDocument::func()"<<endl;
	Serialize();
}

void CDocument::Serialize(){
	cout<<"CDocument::Serialize()"<<endl;
}

void CMyDoc::Serialize(){
	cout<<"CMyDoc::Serialize()"<<endl;
}

/*
 * 成员函数被重载的特征：overload
 * 	相同的范围
 * 	函数名称相同
 * 	参数不相同
 * 	virtual关键字可有可无
 * 覆盖是指派生类函数覆盖基类函数，其区别如下：overwrite
 * 	不同的范围
 * 	函数名字相同
 * 	参数相同
 * 	基类函数必须有virtual关键字
 * 重定义（派生来与基类）：override
 * 	不同的范围（分别位于派生类与基类）
 * 	函数名与参数都相同，无virtual关键字
 * 	函数名相同，参数不同，virtual可有可无
 */
