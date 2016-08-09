/**
 * @file 8.09.01.cpp
 * @brief 纯虚函数，抽象基类
 * @author LiWenGang
 * @date 2016-08-09
 */
#include<iostream>
#include<vector>
using namespace std;

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

class Square:public Shape{
	public:
		void Draw();
		~Square();
};

void DrawAllShapes(const vector<Shape*> &v){
	vector<Shape*>::const_iterator it;
	for(it=v.begin();it!=v.end();++it){
		(*it)->Draw();
	}
}

void DeleteAllShapes(const vector<Shape*> &v){
	vector<Shape*>::const_iterator it;
	for(it=v.begin();it!=v.end();++it){
		delete(*it);
	}
}


int main(int argc,char* argv[]){
	//Shape s;	//Error,不能实例化抽象类
	vector<Shape*> v;
	Shape* ps;
	ps=new Circle;
	v.push_back(ps);
	ps=new Square;
	v.push_back(ps);

	DrawAllShapes(v);
	DeleteAllShapes(v);

	return 0;
}

void Circle::Draw(){
	cout<<"Circle::Draw()"<<endl;
}

Circle::~Circle(){
	cout<<"Circle::~Circle"<<endl;
}

void Square::Draw(){
	cout<<"Square::Draw()"<<endl;
}

Square::~Square(){
	cout<<"Square::~Square()"<<endl;
}

Shape::~Shape(){
	cout<<"Shape::~Shape()"<<endl;
}
/*
 * 虚函数：
 * 基类指针指向派生类对象，调用的是派生类的虚函数。这就使得我们可以以一致的观点来看待不同d派生类对象。
 *
 * 在基类中不能给出有意义的虚函数定义，这时可以把它说明成纯虚函数，把它的定义留给派生类来做，纯虚函数不需要实现。当类中出现一个纯虚函数时，该类便为抽象基类
 * 抽象类为抽象和设计的目的而声明，将有关的数据和行为组织在一个继承层次结构中，保证派生类具有要求的行为
 *
 * 抽象类只能作为基类来使用
 * 不能声明为抽象类的对象，可以声明抽象类的指针和引用
 * 构造函数不能是虚函数，析构函数可以是虚函数
 */
