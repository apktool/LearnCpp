/**
 * @file 10.01.06.cpp
 * @brief 通过成员函数进行格式化输出
 * @author LiWenGang
 * @date 2016-10-01
 */
#include<iostream>

using namespace std;

int main(int argc,char* argv[]){
	int n=64;
	double d=123.45;
	double d2=0.018;

	cout<<"=================宽度控制=================="<<endl;
	cout<<n<<'#'<<endl;
	cout.width(10);//宽度控制，不会影响下一个输出
	cout<<n<<'#'<<n<<endl;

	cout<<"=================对齐控制=================="<<endl;
	cout.width(10);
	cout.setf(ios::left);//宽度控制，会影响下一个输出
	cout<<n<<'#'<<endl;

	cout.width(10);
	cout<<n<<'#'<<endl;

	cout.width(10);
	cout.unsetf(ios::left);

	cout<<"=================填充控制=================="<<endl;
	cout.width(10);
	cout.fill('?');//填充控制，会影响下一个输出
	cout<<n<<'#'<<endl;

	cout.width(10);
	cout.fill(' ');
	cout<<n<<'#'<<endl;

	cout<<"=================精度控制=================="<<endl;
	cout.precision(4);//保留4位有效数字
	cout<<d<<endl;
	cout.precision(2);
	cout<<d2<<endl;

	cout.setf(ios::fixed);
	cout.precision(4);//小数点后保留4位
	cout<<d<<endl;
	cout.precision(2);
	cout<<d2<<endl;

	cout<<"=================进制输出=================="<<endl;
	cout.setf(ios::showbase);
	cout<<n<<endl;
	cout.unsetf(ios::dec);
	cout.setf(ios::oct);
	cout<<n<<endl;

	cout.unsetf(ios::showbase);
	cout<<n<<endl;
	return 0;
}
