#pragma once

class AbstractPizza;
class SimplePizzaFactory
{
public:
	enum PizzaType{
		CheesePizzaTpe,
		GreekPizzaType,
		PipperPizzaType,
		//..���Լ����������
	};
	SimplePizzaFactory(void);
	~SimplePizzaFactory(void);
	AbstractPizza* CreatePizzaByType(PizzaType type);
};
