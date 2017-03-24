#pragma once

class AbstractLight;
class Creator
{
public:
	Creator(void);
	virtual ~Creator(void);
	// 抽象的创建Light的方法
	virtual AbstractLight* CreateLight(void) = 0;
};
