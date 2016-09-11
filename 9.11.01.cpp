/**
 * @file 9.11.01.cpp
 * @brief 统计单词出现的次数，但是不统计exclude中包括的常见单词
 * @author LiWenGang
 * @date 2016-09-11
 */
#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;

int main(int argc, char* argv[]){
	map<string, size_t> maplist;
	set<string> exclude={
		"the", "but", "and", "or", "an", "a"
	};
	string word;

	while(cin>>word){
		if(exclude.find(word)==exclude.end())
			++maplist[word];
	}

	for(const auto& w:maplist){
		cout<<w.first<<" occurs "<<w.second<<" times "<<endl;
	}
	return 0;
}
