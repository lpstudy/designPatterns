#include <assert.h>
#include "log.h"
#include "Singleton.h"
#include "StaticSingleton.h"


int main()
{
	CallManager* pCallManager = CallManager::GetInstance();

	Singleton* single  = Singleton::GetInstance();
	Singleton* single2 = Singleton::GetInstance();
	Singleton* single3 = Singleton::GetInstance();
	Singleton::DestoryInstance();
	//delete single;
	//delete single2;//error

	
	CallManager* pCallManager2 = CallManager::GetInstance();
	assert(pCallManager == pCallManager2);

	return 0;
}