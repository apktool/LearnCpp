/**
 * @file 10.01.03.cpp
 * @brief string流|istringstream
 * @author LiWenGang
 * @date 2016-10-01
 */
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(int argc,char* argv[]){
	string line;
	string word;	

	while(getline(cin,line)){
		istringstream iss(line);
		while(iss>>word){
			cout<<word<<"#";
		}
		cout<<endl;
	}
	return 0;
}
