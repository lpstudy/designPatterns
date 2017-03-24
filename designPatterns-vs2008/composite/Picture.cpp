#include <algorithm>
#include "Picture.h"
#include "log.h"

Picture::Picture(void)
{
	TRACE_FUCTION_AND_LINE("");
}

Picture::~Picture(void)
{
	TRACE_FUCTION_AND_LINE("");
}
void Picture::Add(Graphic* g)
{
	TRACE_FUCTION_AND_LINE("");
	graphiclist_.push_back(g);
}
void Picture::Remove(Graphic* g)
{
	TRACE_FUCTION_AND_LINE("");
	typedef vector<Graphic*>::iterator GraphicIterator;
	GraphicIterator it;
	if((it = find(graphiclist_.begin(), graphiclist_.end(), g)) != graphiclist_.end())
	{
		graphiclist_.erase(it);
	}
}
void Picture::Draw(void)
{
	TRACE_FUCTION_AND_LINE("");
	typedef vector<Graphic*>::iterator GraphicIterator;
	GraphicIterator it;
	for(it = graphiclist_.begin(); it != graphiclist_.end(); ++it)
	{
		if(*it)
			(*it)->Draw();
	}

}