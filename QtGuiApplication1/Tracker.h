#pragma once
//Ӳ�����tracker�ĳ����,���麯��������ʵ����
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