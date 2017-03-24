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
	CallManager(){//ע�����Ϊ˽��
		printf("CallManager Constructed...\n");
	}
};