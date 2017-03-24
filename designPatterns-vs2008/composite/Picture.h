#pragma once
#include <vector>
#include "Graphic.h"
using std::vector;

class Picture :	public Graphic
{
public:
	Picture(void);
	~Picture(void);
public:
	virtual void Add(Graphic* g);
	virtual void Remove(Graphic* g);
	virtual void Draw(void);
private:
	vector<Graphic*> graphiclist_;
};
