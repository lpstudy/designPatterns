#include <stdio.h>

class CallManager
{
public:
	static CallManager* GetInstance(){
		static CallManager localManager;
		return &localManager;
	}
	~CallManager(){
		printf("CallManager Destructed...\n");
	}
private:
	CallManager(){//注意这个为私有
		printf("CallManager Constructed...\n");
	}
};