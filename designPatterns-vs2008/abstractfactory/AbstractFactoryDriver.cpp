#include "UIButton.h"
#include "log.h"
#include "AbstractFactory.h"
#include "WinowsUIFactory.h"
#include "UnixUIFactory.h"
#include <windows.h>              

int main()
{
#ifdef WIN32
	TRACE_FUCTION_AND_LINE("windows.........");
#else
	TRACE_FUCTION_AND_LINE("unix.........");
#endif

	TRACE_FUCTION_AND_LINE("WinowsUIFactory.........");
	AbstractFactory* factory = new WinowsUIFactory;
	factory->CreateButton();
	factory->CreateTextField();
	factory->CreateTextView();
	delete factory;

	TRACE_FUCTION_AND_LINE("UnixUIFactory.........");
	factory = new UnixUIFactory;
	factory->CreateButton();
	factory->CreateTextField();
	factory->CreateTextView();
	delete factory;

	return 0;
}