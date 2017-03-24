#pragma once
#include "creator.h"

class AbstractLight;
class BubbleCreator :
	public Creator
{
public:
	BubbleCreator(void);
	~BubbleCreator(void);
	virtual AbstractLight* CreateLight(void);
};
