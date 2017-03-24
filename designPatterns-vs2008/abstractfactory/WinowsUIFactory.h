#pragma once
#include "AbstractFactory.h"

class WinowsUIFactory :
	public AbstractFactory
{
public:
	WinowsUIFactory(void);
	~WinowsUIFactory(void);
	virtual UIButton* CreateButton(void);
	virtual UITextField* CreateTextField(void);
	virtual UITextView* CreateTextView(void);
};
