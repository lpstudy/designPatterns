#pragma once
#include "creator.h"

class AbstractLight;
class TubeCreator :
	public Creator
{
public:
	TubeCreator(void);
	~TubeCreator(void);
	virtual AbstractLight* CreateLight(void);
};
