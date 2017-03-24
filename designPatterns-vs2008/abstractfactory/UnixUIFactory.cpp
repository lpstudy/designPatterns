#include "UnixUIFactory.h"
#include "UnixUIButton.h"
#include "UnixUITextField.h"
#include "UnixUITextView.h"
#include "log.h"

UnixUIFactory::UnixUIFactory(void)
{
	TRACE_FUCTION_AND_LINE("");
}

UnixUIFactory::~UnixUIFactory(void)
{
	TRACE_FUCTION_AND_LINE("");
}
UIButton* UnixUIFactory::CreateButton(void)
{
	return new UnixUIButton;
}
UITextField* UnixUIFactory::CreateTextField(void)
{
	return new UnixUITextField;
}
UITextView* UnixUIFactory::CreateTextView(void)
{
	return new UnixUITextView;
}