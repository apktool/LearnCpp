/**
 * @file 10.03.03.cpp
 * @brief 使用模板实现栈|非类型模板参数
 * @author LiWenGang
 * @date 2016-10-03
 */
#include<iostream>
#include<stdexcept>
template<typename T, int MAXSIZE>
class Stack{
	public:
		explicit Stack();
		~Stack();

		void Push(const T& elem);
		void Pop();
		T& Top();
		const T& Top() const;
		bool Empty() const;
	private:
		T* elems_;
		int top_;
};

template<typename T, int MAXSIZE>
Stack<T,MAXSIZE>::Stack():top_(-1){
	elems_=new T[MAXSIZE];
}

template<typename T, int MAXSIZE>
Stack<T,MAXSIZE>::~Stack(){
	delete[] elems_;
}

template<typename T, int MAXSIZE>
void Stack<T,MAXSIZE>::Push(const T& elem){
	if(top_+1>=MAXSIZE){
		throw std::out_of_range("Stack<>::Push() stack full");
	}
	elems_[++top_]=elem;
}
template<typename T, int MAXSIZE>
void Stack<T,MAXSIZE>::Pop(){
	if(top_+1==0){
		throw std::out_of_range("Stack<>::Push() stack empty");
	}
	--top_;
}

template<typename T, int MAXSIZE>
T& Stack<T,MAXSIZE>::Top(){
	if(top_+1==0){
		throw std::out_of_range("Stack<>::Push() stack empty");
	}
	return elems_[top_];
}

template<typename T, int MAXSIZE>
bool Stack<T,MAXSIZE>::Empty() const{
	return top_+1==0;
}

int main(int argc,char* argv[]){
	Stack<int,10> s;
	s.Push(1);
	s.Push(2);
	s.Push(3);

	while(!s.Empty()){
		std::cout<<s.Top()<<std::endl;
		s.Pop();
	}
	return 0;
}
