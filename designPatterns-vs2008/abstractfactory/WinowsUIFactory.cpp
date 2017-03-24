#include "WinowsUIFactory.h"
#include "WinUIButton.h"
#include "WinUITextField.h"
#include "WinUITextView.h"
#include "log.h"

WinowsUIFactory::WinowsUIFactory(void)
{
	TRACE_FUCTION_AND_LINE("");
}

WinowsUIFactory::~WinowsUIFactory(void)
{
	TRACE_FUCTION_AND_LINE("");
}
UIButton* WinowsUIFactory::CreateButton(void)
{
	return new WinUIButton;
}
UITextField* WinowsUIFactory::CreateTextField(void)
{
	return new WinUITextField;
}
UITextView* WinowsUIFactory::CreateTextView(void)
{
	return new WinUITextView;
}