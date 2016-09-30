/**
 * @file 9.30.01.cpp
 * @brief 模拟实现智能指针
 * @author LiWenGang
 * @date 2016-09-30
 */
#include<iostream>

class Node{
	public:
		Node();
		~Node();
		void Calc() const;
};

class NodePtr{
	public:
		explicit NodePtr(Node* ptr=0):ptr_(ptr){};
		~NodePtr(){
			delete ptr_;
		};

		NodePtr(NodePtr& other):ptr_(other.Release()){}

		Node& operator* () const{
			return *Get();
		}

		Node* operator-> () const{
			return Get();
		}

		NodePtr& operator= (NodePtr& other){
			Reset(other.Release());
			return* this;
		}

		Node* Get() const{
			return ptr_;
		}

		Node* Release(){
			Node* tmp=ptr_;
			ptr_=0;
			return tmp;
		}

		void Reset(Node* ptr=0){
			if(ptr_!=ptr){
				delete ptr_;
			}
			ptr_=ptr;
		}
	private:
		Node* ptr_;
};

int main(int argc, char* argv[]){
	NodePtr np(new Node);
	np->Calc();

	NodePtr np2(np);

	NodePtr np3=np;
	return 0;
}

Node::Node(){
	std::cout<<"Node..."<<std::endl;
}

Node::~Node(){
	std::cout<<"~Node..."<<std::endl;
}

void Node::Calc() const{
	std::cout<<"Node::Calc..."<<std::endl;
}

/*
 * 裸指针
 *
 * 解决空悬指针，内存泄露，重复释放等问题
 */
