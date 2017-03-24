#pragma once
#include "Graphic.h"

class Line : public Graphic
{
public:
	Line(void);
	~Line(void);

	virtual void Draw();
};
