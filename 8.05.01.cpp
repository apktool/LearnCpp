/**
 * @file 8.05.01.cpp
 * @brief 继承|公有继承、保护继承、私有继承
 * @author LiWenGang
 * @date 2016-08-05
 */
#include<iostream>

class Base{
	public:
		int x_;
	protected:
		int y_;
	private:
		int z_;
};

class PublicInherit:public Base{
	public:
		void Test();
	private:
		int n_;
};

class ProtectedInherit:protected Base{
	public:
		void Test();
	private:
		int n_;
};

class PrivateInherit:private Base{
	public:
		void Test();
	private:
		int n_;
};

int main(int argc, char* argv[]){
	PublicInherit pub;
	pub.x_=100;
	//pub.y_=200;
	//pub.z_=300;

	ProtectedInherit prt;
	//prt.x_=100;
	//prt.y_=200;
	//prt.z_=300;

	PrivateInherit pvt;
	//pvt.x_=100;
	//pvt.y_=200;
	//pvt.z_=300;
	return 0;
}

void PublicInherit::Test(){
	x_=10;
	y_=20;
	//z_=30;
}

void ProtectedInherit::Test(){
	x_=10;
	y_=20;
	//z_=30;
}

void PrivateInherit::Test(){
	x_=10;
	y_=20;
	//z_=30;

}

/*
 * 基类		范围大	抽象
 * 派生类	范围小	具体
 *
 * 公有继承的派生类可以访问基类的公有成员，保护成员，但不能访问基类的私有成员
 *
 * 继承方式 | 基类成员特性	派生类成员特性	| 派生类对象是否能直接访问基类成员
 * ---------|-------------------------------|----------------------------------
 * 公有继承 | public		public			|			是
 * 			| protected		protected		|			是
 * 			| private						|			否
 * ---------|-------------------------------|---------------------------------
 * 保护继承 | public		protected		|			是
 * 			| protected		protected		|			是
 * 			| private						|			否
 * ---------|-------------------------------|---------------------------------
 * 私有继承 | public		private			|			是
 * 			| protected		private			|			是
 * 			| private						|			否
 */
