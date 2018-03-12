#pragma once
//硬件层的tracker的抽象层,纯虚函数不允许实例化
class Tracker
{
public:
	Tracker();
	virtual ~Tracker();

private:
	virtual int initTracker() = 0;
	virtual int connectTracker() = 0;
	virtual int sendMessage2Tracker() = 0;
};