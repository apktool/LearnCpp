/**
 * @file 8.09.02.cpp
 * @brief 对象的动态创建
 * @author LiWenGang
 * @date 2016-08-09
 */
#include<iostream>
#include<string>
#include<vector>
#include<map>

#define REGISTER_CLASS(class_name) \
	class class_name##Register{ \
		public: \
				static void* NewInstance(){ \
					return new class_name; \
				} \
		private: \
				static Register reg_; \
	}; \
Register class_name##Register::reg_(#class_name, class_name##Register::NewInstance)

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

class Register{
	public:
		Register(const string& name, CREATE_FUN func);
};

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

Register::Register(const string& name, CREATE_FUN func){
	DynObjectFactor::Register(name,func);
}
