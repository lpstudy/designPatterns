#pragma once

class AbstractLight;
class Creator
{
public:
	Creator(void);
	virtual ~Creator(void);
	// ����Ĵ���Light�ķ���
	virtual AbstractLight* CreateLight(void) = 0;
};
