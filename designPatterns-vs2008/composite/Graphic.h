#pragma once

class Graphic
{
public:
	Graphic(void);
	virtual ~Graphic(void);
	virtual void Draw(void) = 0;
	virtual void Add(Graphic* g);
	virtual void Remove(Graphic* g);
	virtual Graphic* GetChild(int n);
};
