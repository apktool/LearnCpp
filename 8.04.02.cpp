/**
 * @file 8.04.02.cpp
 * @brief string|成员函数
 * @author LiWenGang
 * @date 2016-08-04
 */
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	string str("hello world");
	cout<<str<<endl;
	cout<<str.size()<<endl;		//字符串大小
	cout<<str.length()<<endl;	//字符串长度
	cout<<str.empty()<<endl;	//字符串是否为空
	cout<<str.substr(6,5)<<endl;	//截取子串（从第6个位置开始，到其后面的5个为止）
	cout<<str.substr(6,-1)<<endl;	//截取子串（从第6个位置开始，到最后一个字符为止）

	string::size_type lpos=str.find('e',1);	//从第1个位置开始查找'e'
	if(lpos==string::npos){
		cout<<"not found"<<endl;
	}else{
		cout<<"lpos="<<lpos<<endl;
	}

	string::size_type rpos=str.rfind('w',-1);	//从最后一个位置向前查找'w'
	if(rpos==string::npos){
		cout<<"not found"<<endl;
	}else{
		cout<<"rpos="<<rpos<<endl;
	}

	cout<<str.replace(0,1,"H")<<endl;	//替换str下标从0开始的1个字符串
	cout<<str.insert(0,"Hello latex ")<<endl;	//在str下标为0的位置前面添加"Hello latex"
	cout<<str.append(" Hello c++")<<endl;	//在str的后面追加"Hello c++"
	return 0;
}
