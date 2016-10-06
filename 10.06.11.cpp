/**
 * @file 10.06.11.cpp
 * @brief priority_queue|STL
 * @author LiWenGang
 * @date 2016-10-06
 */
#include<iostream>
#include<queue>
#include<iterator>

using namespace std;

int main(int argc, char* argv[]){
	int a[]={5,1,2,4,3};
	make_heap(a,a+5);
	copy(a,a+5,ostream_iterator<int>(cout," "));
	cout<<endl;

	//优先级队列，默认值越大，优先级越高
	priority_queue<int> q(a,a+5);//STL实现的时候，会构建一个堆，类似于堆排序的“堆”

	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
	cout<<endl;

	//使用greater修改了优先级，值越小优先级越高
	priority_queue<int, vector<int>, greater<int>> q1(a,a+5);
	while(!q1.empty()){
		cout<<q1.top()<<" ";
		q1.pop();
	}
	cout<<endl;

	make_heap(a,a+5,greater<int>());//大根堆
	sort_heap(a,a+5,greater<int>());
	copy(a,a+5,ostream_iterator<int>(cout," "));
	cout<<endl;

	return 0;
}
