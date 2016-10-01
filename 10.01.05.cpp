/**
 * @file 10.01.05.cpp
 * @brief 通过操纵子方式进行格式化输出
 * @author LiWenGang
 * @date 2016-10-01
 */
#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc,char* argv[]){
	int n=64;
	double d=123.45;
	double d2=0.018;

	cout<<"=================宽度控制=================="<<endl;
	cout<<n<<'#'<<endl;
	cout<<setw(10)<<n<<'#'<<endl;//宽度控制，不会影响下一个输出

	cout<<"=================对齐控制=================="<<endl;
	cout<<setw(10)<<setiosflags(ios::left)<<n<<'#'<<endl;
	cout<<setw(10)<<n<<'#'<<endl;//对齐控制，会影响下一个输出
	cout<<setw(10)<<resetiosflags(ios::left)<<n<<'#'<<endl;

	cout<<"=================填充控制=================="<<endl;
	cout<<setw(10)<<setfill('?')<<n<<endl;
	cout<<setw(10)<<n<<endl;
	cout<<setw(10)<<setfill(' ')<<n<<endl;

	cout<<"=================精度控制=================="<<endl;
	cout<<setprecision(4)<<d<<endl;//保留4位有效数字
	cout<<setprecision(2)<<d2<<endl;

	cout<<setiosflags(ios::fixed);
	cout<<setprecision(4)<<d<<endl;//小数点后保留4位
	cout<<setprecision(2)<<d2<<endl;

	cout<<"=================进制输出=================="<<endl;
	cout<<oct<<n<<endl;
	cout<<hex<<n<<endl<<endl;

	cout<<setiosflags(ios::showbase);
	cout<<dec<<n<<endl;
	cout<<oct<<n<<endl;
	cout<<hex<<n<<endl<<endl;

	cout<<setbase(10)<<n<<endl;
	cout<<setbase(8)<<n<<endl;
	cout<<setbase(16)<<n<<endl;

	return 0;
}
