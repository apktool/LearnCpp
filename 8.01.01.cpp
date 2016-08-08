/**
 * @file 8.01.01.cpp
 * @brief 单例模式
 * @author LiWenGang
 * @date 2016-08-01
 */
#include<iostream>
using std::cout;
using std::endl;

//C++11标准 拷贝控制的实现
class Singleton{
	public:
		Singleton();
		~Singleton();
		Singleton(const Singleton& obj)=delete;
		Singleton& operator= (const Singleton& obj)=delete;
		static Singleton* GetInstance();
	private:
		static Singleton* m_instance;
};

/*
class Singleton{
	public:
		static Singleton* GetInstance();
		~Singleton();
	private:
		Singleton(const Singleton& obj);				//将拷贝构造函数声明为私有，可以有效防止对象的拷贝
		Singleton& operator= (const Singleton& obj);	//将等号运算符重载声明为私有，可以防止对象的拷贝
		Singleton();
		static Singleton* m_instance;
};
*/
Singleton* Singleton::m_instance;

int main(int argc, char* argv[]){
	Singleton* p1=Singleton::GetInstance();
	Singleton* p2=Singleton::GetInstance();
	cout<<(void*)p1<<endl;
	cout<<(void*)p2<<endl;

	/*禁止拷贝*/
	//Singleton p3(*p1);
	//Singleton p4=*p2;
	return 0;
}

/**
 * @brief GetInstance()
 *
 * @return instance地址
 *
 * @note 
 * @see 
 */
Singleton* Singleton::GetInstance(){
	/*
	if(m_instance==NULL){
		m_instance=new Singleton;
	}
	return m_instance;
	*/
	static Singleton instance;	//为了保证一个类只有一个实例，必须采用static类型；
	return &instance;			//这样实现的单例模式并不是线程安全的。
}

Singleton::Singleton(){
	cout<<"constructor function"<<endl;
}

Singleton::~Singleton(){
	cout<<"destructor function"<<endl;
}
/*
 * 单例模式：
 * 保证一个类只有一个实例，并提供一个全局访问点
 * 禁止拷贝
 */
