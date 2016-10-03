/**
 * @file 10.03.08.cpp
 * @brief 对象的动态创建|采用模板方式实现
 * @author LiWenGang
 * @date 2016-10-03
 */
#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

class Shape;
void DrawAllShape(const vector<Shape*>& v);
void DeleteAllShape(const vector<Shape*>& v);

class Shape{
	public:
		virtual void Draw()=0;
		virtual ~Shape();
};

class Circle:public Shape{
	public:
		void Draw();
		~Circle();
};

class Triangle:public Shape{
	public:
		void Draw();
		~Triangle();
};

typedef void* (*CREATE_FUN)();

class DynObjectFactor{
	public:
		static void* CreateObject(const string& name);
		static void Register(const string& name, CREATE_FUN func);
	private:
		static map<string, CREATE_FUN> mapCls_;
};
map<string,CREATE_FUN>DynObjectFactor::mapCls_;

template<typename T>
class DelegatingClass{
	public:
		DelegatingClass(const string& name){
			DynObjectFactor::Register(name,&(DelegatingClass::NewInstance));
		}
		static void* NewInstance(){
			return new T;
		}
};

#define REGISTER_CLASS(class_name) DelegatingClass<class_name> class##class_name(#class_name)

int main(int argc, char* argv[]){
	vector<Shape*> v;
	Shape* ps;
	
	ps=static_cast<Shape*>(DynObjectFactor::CreateObject("Circle"));
	v.push_back(ps);

	ps=static_cast<Shape*>(DynObjectFactor::CreateObject("Triangle"));
	v.push_back(ps);

	DrawAllShape(v);
	DeleteAllShape(v);

	return 0;
}


void DrawAllShape(const vector<Shape*>& v){
	for(vector<Shape*>::const_iterator it=v.begin();it!=v.end();++it){
		(*it)->Draw();
	}
}

void DeleteAllShape(const vector<Shape*>& v){
	for(vector<Shape*>::const_iterator it=v.begin();it!=v.end();++it){
		delete(*it);
	}
}

Shape::~Shape(){
	cout<<"Shape::~Shape()"<<endl;
}

void Circle::Draw(){
	cout<<"Circle::Draw()"<<endl;
}

Circle::~Circle(){
	cout<<"Circle::~Circle()"<<endl;
}

void Triangle::Draw(){
	cout<<"Triangle::Draw()"<<endl;
}

Triangle::~Triangle(){
	cout<<"Triangle::~Triangle()"<<endl;
}


REGISTER_CLASS(Circle);
REGISTER_CLASS(Triangle);


void* DynObjectFactor::CreateObject(const string& name){
	map<string, CREATE_FUN>::const_iterator it;
	it=mapCls_.find(name);
	if(it==mapCls_.end()){
		return NULL;
	}else{
		return it->second();
	}
}

void DynObjectFactor::Register(const string& name, CREATE_FUN func){
	mapCls_[name]=func;
}

/*
 * 与8.09.02.cpp相同的功能，只是本程序使用模板实现而已
 */
