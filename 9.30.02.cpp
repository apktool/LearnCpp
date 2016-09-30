/**
 * @file 9.30.02.cpp
 * @brief 单例模式，修复指针释放时错误
 * @author LiWenGang
 * @date 2016-09-30
 */
#include<iostream>
#include<memory>
using std::cout;
using std::endl;
using std::auto_ptr;

class Singleton{
	public:
		Singleton();
		~Singleton();
		Singleton(const Singleton& obj)=delete;
		Singleton& operator= (const Singleton& obj)=delete;
		static Singleton* GetInstance();
	private:
		static auto_ptr<Singleton> instance_;
};

auto_ptr<Singleton>(Singleton::instance_);

int main(int argc, char* argv[]){
	Singleton* p1=Singleton::GetInstance();
	Singleton* p2=Singleton::GetInstance();
	cout<<(void*)p1<<endl;
	cout<<(void*)p2<<endl;
	return 0;
}

Singleton* Singleton::GetInstance(){
	if(!instance_.get()){
		instance_=auto_ptr<Singleton>(new Singleton);
	}
	return instance_.get();
}

Singleton::Singleton(){
	cout<<"constructor function"<<endl;
}

Singleton::~Singleton(){
	cout<<"destructor function"<<endl;
}
