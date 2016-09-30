/**
 * @file 9.30.03.cpp
 * @brief istream,ostream
 * @author LiWenGang
 * @date 2016-09-30
 */
#include<iostream>

using namespace std;

int main(int argc, char* argv[]){
	/*
	int n1=100;
	int n2=200;
	cout<<n1<<" "<<n2<<endl;

	cout.put('H');
	cout.put('i');
	cout.put(' ');
	cout.put('H').put('i').put('\n');

	char buf[]="test!--!";
	cout.write(buf,5);
	cout.put('\n');
	*/
	//----------------------------------------------
	
	/*
	int n;
	char ch;
	cin>>n>>ch;
	cout<<"n="<<n<<" "<<"ch="<<ch<<endl;
	*/

	/*
	int n=cin.get();//获取一个字符，并返回ASCII字符
	cout<<n<<endl;
	*/

	/*
	char ch1;
	char ch2;
	cin.get(ch1).get(ch2);
	cout<<ch1<<" "<<ch2<<endl;
	*/
	
	/*
	char buf[10]={0};
	cin>>buf;			//不接收换行符，遇到空格会停止
	//cin.getline(buf,9);	//不接收换行符,遇到空格并不停止
	cout<<buf<<endl;
	*/

	/*
	char buf[10];
	cin.read(buf,5);	//读取满五个字节停止，无论空格还是换行，均会接收
	cout<<buf<<endl;
	*/

	char c[10],c2,c3;
	c2=cin.get();
	c3=cin.get();
	cin.putback(c2);	//将一个字符重新放入输入流中，比如输入123456789，此时c2=1,c3=2,剩余的流中会剩余“3456789”，执行此条语句后，又会将c2重新放入流中，最后流中会剩余13456789
	cin.getline(&c[0],9);
	cout<<c<<endl;

	//----------------------------------------------
	
	return 0;
}
