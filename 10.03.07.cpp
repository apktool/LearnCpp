/**
 * @file 10.03.07.cpp
 * @brief 单例模式|模板实现
 * @author LiWenGang
 * @date 2016-10-03
 */
#include<iostream>
#include<cstdlib>
using namespace std;

template<typename T>
class Singleton{
	public:
		static T& GetInstance(){
			/*
			static T instance;
			return instance;
			*/

			Init();
			return* instance_;
		}

		Singleton()=delete;
		~Singleton()=delete;
		Singleton(const Singleton& other)=delete;
		Singleton& operator= (const Singleton& other)=delete;
	private:
		static void Init(){
			if(instance_==0){
				instance_=new T;
				atexit(Destroy);
			}
		}
		static void Destroy(){
			delete instance_;
		}
		static T* instance_;
};

template<typename T>
T* Singleton<T>::instance_=0;

//----------------------------------------------------------

class ApplicationImpl{
	public:
		ApplicationImpl(){
			cout<<"ApplicationImpl..."<<endl;
		}
		~ApplicationImpl(){
			cout<<"~ApplicationImpl..."<<endl;
		}
		void Run(){
			cout<<"Run"<<endl;
		}
};

//包装的类
typedef Singleton<ApplicationImpl> Application;

int main(int argc,char* argv[]){
	Application::GetInstance().Run();
	Application::GetInstance().Run();
	return 0;
}

/*
 * 目前的单例模式并不属于线程安全，即如果多个线程同时操作的话，会导致单例模式失效
 */
