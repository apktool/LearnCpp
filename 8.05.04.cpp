/**
 * @file 8.05.04.cpp
 * @brief 派生类到基类的转换
 * @author LiWenGang
 * @date 2016-08-05
 */
#include<iostream>
#include<string>
using namespace std;

class Employee{
	public:
		Employee(const string& name, int age, int deptno);
	private:
		string name_;
		int age_;
		int deptno_;
};

class Manager:public Employee{
	public:
		Manager(const string& name, int age, int deptno,int level);
	private:
		int level_;
};

class Manager2:private Employee{
	public:
		Manager2(const string& name, int age, int deptno,int level);
	private:
		int level_;
};

int main(int argc, char* argv[]){
	Employee* pe;
	Employee e1("zhang",22,25);
	pe=&e1;

	Manager* pm;
	Manager m1("li",21,25,1);
	pm=&m1;

	pe=&m1;		//派生类对象指针可以转化为基类指针。将派生类对象看成基类对象。
	//pm=&e1;		//基类指针无法转化为派生类指针。无法将基类对象看成派生类对象。

	e1=m1;		//派生类对象可以转化为基类对象。将派生类对象看成基类对象。
				//会产生对象切割（派生类特有成员消失）：object slicing


	Manager2* pm2;
	Manager2 m2("wang",20,23,2);
	pm2=&m2;
	//pe=&m2;		//私有或保护继承的时候，派生类对象指针不可以自动转化为基类对象指针
	pe=reinterpret_cast<Employee*>(&m2);
	//e1=m2;			//私有或保护继承的时候，派生类对象无法转化为基类对象。
	//e1=reinterpret_cast<Employee>(m2);	//即使类型强制转换也不行
	return 0;
}

Employee::Employee(const string& name, int age, int deptno):name_(name),age_(age),deptno_(deptno){

}

Manager::Manager(const string& name, int age, int deptno, int level):Employee(name,age,deptno),level_(level){

}
/*
 * 当派生类以public方式继承基类时，编译器可自动执行的转化（向上转型upcasting安全转换）
 * 	派生类对象指针自动转换为基类对象指针；
 * 	派生类对象引用自动转化为基类对象引用；
 * 	派生类对象自动转化为基类对象（特有的成员消失）
 * 当派生类以private/protected方式继承基类时
 * 	派生类对象指针（引用）转化为基类对象指针（引用）需要强制类型转化，但不能使用static_cast，要用reinterpret_cast
 * 	不能把派生类对象强制转换为基类对象
 */

/*
 * static_cast 用于编译器认可的静态转换在：
 * 	比如说从char到int；或者具有转换构造函数；或者重载了类型转换运算符
 * reinterpret_cast 用于编译器不认可的静态转换：
 * 	比如说从int*到int
 * const_cast 去除常量属性
 * dynamic_cast 用于动态转换；安全的乡下转型
 */
