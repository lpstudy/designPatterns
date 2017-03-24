#include "Singleton.h"
#include "log.h"

Singleton* Singleton::instance_ = 0;

Singleton::Singleton(void)
{
	TRACE_FUCTION_AND_LINE("");
}

Singleton::~Singleton(void)
{
	TRACE_FUCTION_AND_LINE("");
}
//static
Singleton* Singleton::GetInstance()
{
	if(0 == instance_){
		instance_ = new Singleton;
	}
	return instance_;
}
//static
void  Singleton::DestoryInstance()
{
	if(instance_){
		delete instance_;
	}
	instance_ = 0;
}