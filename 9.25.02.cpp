/**
 * @file 9.25.02.cpp
 * @brief 异常处理|try,catch;throw
 * @author LiWenGang
 * @date 2016-09-25
 */
#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class MyException{
	public:
		MyException(const string& message);
		MyException(const MyException& other);
		~MyException();
		const char* what() const;
	private:
		string message_;

};

double Divied(double x, double y){
	if(y==0){
		MyException e("divied by zero");	//当执行完throw语句时，局部对象e会被销毁
		//throw MyException("divied by zero");	//不会调用拷贝构造函数
		throw e;	//调用一次拷贝构造函数
	}
	return x/y;
}

int main(int argc, char* argv[]){
	try{
		cout<<Divied(5.0,0.0)<<endl;
	}
	catch(MyException& e){
		cout<<e.what()<<endl;
	}
	return 0;
}

MyException::MyException(const string& message):message_(message){
	cout<<"MyException(string& message)"<<endl;
}

MyException::MyException(const MyException& obj):message_(obj.message_){
	cout<<"MyException(MyException& obj)"<<endl;
}

MyException::~MyException(){
	cout<<"~MyException"<<endl;
}

const char* MyException::what() const{
	return message_.c_str();
}

/*
 * 异常发生之前创建的局部对象被销毁，这一过程被称为栈展开
 *
 * 一个异常处理器一般只捕捉一种类型的异常
 * 异常处理器的参数类型喝抛出异常的类型相同
 * ...表示可以捕获任何异常
 *
 * 如果没有合适的异常处理器，那么没有捕获的异常将调用terminte函数，terminate函数默认调用abort终止程序的执行
 * 可以使用set_terminate函数指定terminate函数将调用的函数
 */

/*
 * 沿着嵌套调用的链接向上查找，直至为异常找到一个catch字句。这个过程称之为栈展开。
 * 抛出异常时，将暂停当前函数的执行，开始查找匹配的catch子句。首先检查throw本身是否在try块内部，如果是，检查与该try相关的catch子句，看是否可以处理该异常。如果不能处理，就退出当前函数，并且释放当前函数的内存并销毁局部对象，继续到上层的调用函数中查找，直到找到一个可以处理该异常的catch。这个过程称为栈展开（stack unwinding）。当处理该异常的catch结束之后，紧接着该catch之后的点继续执行。
 *
 * 1. 为局部对象调用析构函数
 * 如上所述，在栈展开的过程中，会释放局部对象所占用的内存并运行类类型局部对象的析构函数。但需要注意的是，如果一个块通过new动态分配内存，并且在释放该资源之前发生异常，该块因异常而退出，那么在栈展开期间不会释放该资源，编译器不会删除该指针，这样就会造成内存泄露。
 *
 * 2. 析构函数应该从不抛出异常
 * 在为某个异常进行栈展开的时候，析构函数如果又抛出自己的未经处理的另一个异常，将会导致调用标准库terminate函数。通常terminate函数将调用abort函数，导致程序的非正常退出。所以析构函数应该从不抛出异常。
 *
 * 3. 异常与构造函数
 * 构造函数可以抛出异常，如果在构造函数对象时发生异常，此时该对象可能只是被部分构造，要保证能够销毁这些已构造的成员。
 *
 * 4. 未捕获的异常将会终止程序
 * 不能不处理异常。如果找不到匹配的catch，程序就会调用库函数terminate。
 */
