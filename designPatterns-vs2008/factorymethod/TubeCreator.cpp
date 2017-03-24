#include "TubeCreator.h"
#include "TubeLight.h"
#include "log.h"

TubeCreator::TubeCreator(void)
{
	TRACE_FUCTION_AND_LINE("");
}

TubeCreator::~TubeCreator(void)
{
	TRACE_FUCTION_AND_LINE("");
}
AbstractLight* TubeCreator::CreateLight(void)
{
	return new TubeLight;
}