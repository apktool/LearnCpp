/**
 * @file 10.06.10.cpp
 * @brief queue|STL
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<queue>

using namespace std;

int main(int argc, char* argv[]){
	queue<int> q;
	for(int i=0;i<5;i++){
		q.push(i);
	}
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}
