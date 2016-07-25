/**
 * @file 7.25.01.cpp
 * @brief 类的基本实现
 * @author LiWenGang
 * @date 2016-07-25
 */
#include<iostream>

using namespace std;

class Clock{
	public:
		void init(int hour, int minute, int second);
		void dispaly();
		void update();

		int GetHour();
		int GetMinute();
		int GetSecond();

		void SetHour(int hour);
		void SetMinute(int minute);
		void SetSecond(int second);
	private:
		int m_hour;
		int m_minute;
		int m_second;
};

void Clock::init(int hour, int minute, int second){
	m_hour=hour;
	m_minute=minute;
	m_second=second;
}

void Clock::dispaly(){
	cout<<m_hour<<":"<<m_minute<<":"<<m_second<<endl;
}

void Clock::update(){
	m_second++;
	if(m_second==60){
		m_minute++;
		m_second=0;
	}
	if(m_minute==60){
		m_hour++;
		m_minute=0;
	}
	if(m_hour==24){
		m_hour=0;
	}
}

int Clock::GetHour(){
	return m_hour;
}

int Clock::GetMinute(){
	return m_minute;
}

int Clock::GetSecond(){
	return m_second;
}

void Clock::SetHour(int hour){
	m_hour=hour;
}

void Clock::SetMinute(int minute){
	m_minute=minute;
}

void Clock::SetSecond(int second){
	m_second=second;
}

//-----------------------------------------------

int main(int argc, char* argv[]){
	Clock ch;
	ch.init(16,46,25);
	ch.dispaly();
	ch.update();
	ch.dispaly();
	cout<<ch.GetHour()<<":"<<ch.GetMinute()<<":"<<ch.GetSecond()<<endl;
	ch.SetHour(17);
	ch.SetMinute(10);
	ch.SetSecond(20);
	ch.dispaly();
	return 0;
}

