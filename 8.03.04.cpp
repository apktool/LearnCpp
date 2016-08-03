/**
 * @file 8.03.04.cpp
 * @brief 运算符重载|->
 * @author LiWenGang
 * @date 2016-08-03
 */
#include<iostream>
using std::cout;
using std::endl;

class DBHelper{
	public:
		DBHelper();
		~DBHelper();
		void Open();
		void Close();
		void Query();
};

class DB{
	public:
		DB();
		~DB();
		DBHelper* operator-> ();
	private:
		DBHelper* m_db;
};

int main(int argc, char* argv[]){
	DB db;
	db->Open();
	db->Query();
	db->Close();
	return 0;
}

DBHelper::DBHelper(){
	cout<<"default constructor"<<endl;
}

DBHelper::~DBHelper(){
	cout<<"destructor"<<endl;
}

DBHelper* DB::operator->(){
	return m_db;
}

void DBHelper::Open(){
	cout<<"Open DateBase"<<endl;
}

void DBHelper::Close(){
	cout<<"Close DateBase"<<endl;
}

void DBHelper::Query(){
	cout<<"Query DateBase"<<endl;
}

DB::DB(){
	m_db=new DBHelper;
}

DB::~DB(){
	delete m_db;
}
