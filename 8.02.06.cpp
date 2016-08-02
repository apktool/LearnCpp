/**
 * @file 8.02.06.cpp
 * @brief 后置++运算符重载
 * @author LiWenGang
 * @date 2016-08-02
 */
#include<iostream>
using std::cout;
using std::endl;

class Integer{
	//friend Integer operator++ (Integer& obj, int tmp);	//友元函数的方式重载++
	public:
		Integer(int num);
		~Integer();
		Integer operator++ (int tmp);	////成员函数的方式重载++
		void Dispay();
	private:
		int m_num;
};

int main(int argc, char* argv[]){
	Integer obj(10);
	Integer t=obj++;
	obj.Dispay();
	t.Dispay();
	return 0;
}

Integer::Integer(int num):m_num(num){
	cout<<"constructor"<<endl;
}


Integer::~Integer(){
	cout<<"destructor"<<endl;
}

//成员函数的方式重载++
Integer Integer::operator++ (int tmp){
	Integer temp(m_num);
	m_num++;
	return temp;
}

/*
//友元函数的方式重载++
Integer operator++ (Integer& obj ,int tmp){
	Integer temp(obj.m_num);
	obj.m_num++;
	return temp;
}
*/

void Integer::Dispay(){
	cout<<m_num<<endl;
}
