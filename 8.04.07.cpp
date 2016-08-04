/**
 * @file 8.04.07.cpp
 * @brief map|增删改查
 * @author LiWenGang
 * @date 2016-08-04
 */
#include<iostream>
#include<map>
using namespace std;

int main(int argc, char* argv[]){
	map<string, int> maplist;
	map<string,int>::iterator it;

	//map的四种插入方式
	maplist["aaa"]=100;
	maplist.insert(map<string,int>::value_type("bbb",200));
	maplist.insert(pair<string,int>("ccc",300));
	maplist.insert(make_pair("ddd",400));

	for(map<string,int>::const_iterator it=maplist.begin();it!=maplist.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}

	//map的一种访问方式
	int key_value=maplist["aaa"];
	cout<<key_value<<endl;

	//map的一种修改方式
	maplist["ddd"]=4000;

	//map的另一种修改方式
	it=maplist.find("ccc");
	if(it!=maplist.end()){
		it->second=3000;
	}else{
		cout<<"not found"<<endl;
	}
	
	//map的一种删除操作
	maplist.erase("bbb");
	
	//map的另一种删除操作
	it=maplist.find("ccc");
	if(it!=maplist.end()){
		maplist.erase(it);
	}else{
		cout<<"not found"<<endl;
	}

	for(map<string,int>::const_iterator it=maplist.begin();it!=maplist.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}

	return 0;
}
/*
 * 插入map容器内的元素默认是按照key从小到大的顺序排列的；
 * key类型一定要重载<<运算符
 */
