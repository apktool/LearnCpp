/**
 * @file 10.03.02.cpp
 * @brief 使用模板实现栈
 * @author LiWenGang
 * @date 2016-10-03
 */
#include<iostream>
#include<stdexcept>
template<typename T>
class Stack{
	public:
		explicit Stack(int maxSize);
		~Stack();

		void Push(const T& elem);
		void Pop();
		T& Top();
		const T& Top() const;
		bool Empty() const;
	private:
		T* elems_;
		int maxSize_;
		int top_;
};

template<typename T>
Stack<T>::Stack(int maxSize):maxSize_(maxSize),top_(-1){
	elems_=new T[maxSize_];
}

template<typename T>
Stack<T>::~Stack(){
	delete[] elems_;
}

template<typename T>
void Stack<T>::Push(const T& elem){
	if(top_+1>=maxSize_){
		throw std::out_of_range("Stack<>::Push() stack full");
	}
	elems_[++top_]=elem;
}
template<typename T>
void Stack<T>::Pop(){
	if(top_+1==0){
		throw std::out_of_range("Stack<>::Push() stack empty");
	}
	--top_;
}

template<typename T>
T& Stack<T>::Top(){
	if(top_+1==0){
		throw std::out_of_range("Stack<>::Push() stack empty");
	}
	return elems_[top_];
}

template <typename T>
bool Stack<T>::Empty() const{
	return top_+1==0;
}

int main(int argc,char* argv[]){
	Stack<int> s(10);
	s.Push(1);
	s.Push(2);
	s.Push(3);

	while(!s.Empty()){
		std::cout<<s.Top()<<std::endl;
		s.Pop();
	}
	return 0;
}
