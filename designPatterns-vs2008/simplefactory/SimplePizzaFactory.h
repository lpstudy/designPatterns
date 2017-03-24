#pragma once

class AbstractPizza;
class SimplePizzaFactory
{
public:
	enum PizzaType{
		CheesePizzaTpe,
		GreekPizzaType,
		PipperPizzaType,
		//..可以继续后续添加
	};
	SimplePizzaFactory(void);
	~SimplePizzaFactory(void);
	AbstractPizza* CreatePizzaByType(PizzaType type);
};
