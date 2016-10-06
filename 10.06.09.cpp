/**
 * @file 10.06.09.cpp
 * @brief stack|STL
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<stack>
#include<list>

using namespace std;

int main(int argc, char* argv[]){
	//stack<int> s;
	stack<int,list<int>> s;
	for(int i=0;i<5;i++){
		s.push(i);
	}
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}
