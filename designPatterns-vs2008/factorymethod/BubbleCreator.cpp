#include "BubbleCreator.h"
#include "BubbleLight.h"
#include "log.h"

BubbleCreator::BubbleCreator(void)
{
	TRACE_FUCTION_AND_LINE("");
}

BubbleCreator::~BubbleCreator(void)
{
	TRACE_FUCTION_AND_LINE("");
}
AbstractLight* BubbleCreator::CreateLight(void)
{
	return new BubbleLight;
}