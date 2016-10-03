/**
 * @file 10.03.04.cpp
 * @brief 使用模板实现栈|适配器
 * @author LiWenGang
 * @date 2016-10-03
 */
#include<iostream>
#include<stdexcept>
#include<deque>

using namespace std;

template<typename T, typename CONT=deque<T>>
class Stack{
	public:
		Stack():elems_(){}
		~Stack(){};

		void Push(const T& elem){
			elems_.push_back(elem);
		}
		void Pop(){
			elems_.pop_back();
		}
		T& Top(){
			return elems_.back();
		}
		const T& Top() const{
			return elems_.back();
		}
		bool Empty() const{
			return elems_.empty();
		}
	private:
		CONT elems_;
};

int main(int argc,char* argv[]){
	Stack<int> s;
	s.Push(1);
	s.Push(2);
	s.Push(3);

	while(!s.Empty()){
		std::cout<<s.Top()<<std::endl;
		s.Pop();
	}
	return 0;
}
/*
 * 这种Stack的实现方式使STL六大组件之一——适配器。
 * 将现有类当作参数传递，从而实现代码的复用。C++中默认的stack的实现也是借助于适配器的方式实现的。
 */
