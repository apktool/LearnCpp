/**
 * @file 8.02.02.cpp
 * @brief friend|友元类
 * @author LiWenGang
 * @date 2016-08-02
 */
#include<iostream>
using std::cout;
using std::endl;

class Televersion{
	friend class TeleControl;
	public:
		Televersion(int volume, int channel);
		~Televersion();
	private:
		int m_volume;
		int m_channel;
};

class TeleControl{
	public:
		int VolumeUP(Televersion&);
		int VolumeDown(Televersion&);
		int ChannelUP(Televersion&);
		int ChannelDown(Televersion&);
};

int main(int argc, char* argv[]){
	Televersion tv(3,4);
	TeleControl tc;
	cout<<tc.VolumeUP(tv)<<endl;
	cout<<tc.ChannelUP(tv)<<endl;
	return 0;
}

Televersion::Televersion(int volume, int channel):m_volume(volume),m_channel(channel){
	cout<<"constructor funtion"<<endl;
}

Televersion::~Televersion(){
	cout<<"destructor function"<<endl;
}

int TeleControl::VolumeUP(Televersion& tv){
	return ++tv.m_volume;
}

int TeleControl::VolumeDown(Televersion& tv){
	return --tv.m_volume;
}

int TeleControl::ChannelUP(Televersion& tv){
	return ++tv.m_channel;
}

int TeleControl::ChannelDown(Televersion& tv){
	return --tv.m_channel;
}

/*
 * 友元关系是单项的
 * 友元关系不能被传递
 * 友元关系不能被继承
 */
