#pragma once
#include "Graphic.h"

class Text :
	public Graphic
{
public:
	Text(void);
	~Text(void);
	virtual void Draw(void);
};
