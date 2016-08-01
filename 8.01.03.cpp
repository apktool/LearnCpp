/**
 * @file 8.01.03.cpp
 * @brief mutable
 * @author LiWenGang
 * @date 2016-08-01
 */
#include<iostream>
using std::cout;
using std::endl;

class Test{
	public:
		Test();
		~Test();
		void OutPut() const;
		int OutPutCnt() const;
	private:
		mutable int m_cnt;
};

int main(int argc, char* argv[]){
	Test obj;
	obj.OutPut();
	cout<<obj.OutPutCnt()<<endl;
	return 0;
}

Test::Test():m_cnt(0){
	cout<<"constructor"<<endl;
}

Test::~Test(){
	cout<<"destructor"<<endl;
}

/**
 * @brief OutPut()
 *
 * @note 此处m_cnt之所以可以被修改，主要原因是因为m_cnt是被mutable所修饰
 * @see mutable
 */
void Test::OutPut() const{
	m_cnt++;
}

int Test::OutPutCnt() const{
	return m_cnt;
}
