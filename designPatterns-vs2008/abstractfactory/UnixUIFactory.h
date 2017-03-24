#pragma once
#include "AbstractFactory.h"

class UnixUIFactory :
	public AbstractFactory
{
public:
	UnixUIFactory(void);
	~UnixUIFactory(void);
public:
	virtual UIButton* CreateButton(void);
	virtual UITextField* CreateTextField(void);
	virtual UITextView* CreateTextView(void);
};
