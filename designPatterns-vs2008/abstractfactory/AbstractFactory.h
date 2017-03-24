#pragma once

class UIButton;
class UITextField;
class UITextView;

class AbstractFactory
{
public:
	AbstractFactory(void);
	virtual ~AbstractFactory(void);
	// 抽象方法，创建button
	virtual UIButton* CreateButton(void) = 0;
	virtual UITextField* CreateTextField(void) = 0;
	virtual UITextView* CreateTextView(void) = 0;
};
