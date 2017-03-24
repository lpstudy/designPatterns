#pragma once

class Singleton
{
public:
	virtual ~Singleton(void);
public:
	static Singleton* GetInstance();
	static void       DestoryInstance();
private:
	Singleton(void);

	static Singleton* instance_;
};
