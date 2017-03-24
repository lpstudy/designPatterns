#pragma once
#include "Graphic.h"

class Rectangle :
	public Graphic
{
public:
	Rectangle(void);
	~Rectangle(void);

	virtual void Draw();
};
