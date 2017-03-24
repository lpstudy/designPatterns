#include "SimplePizzaFactory.h"
#include "AbstractPizza.h"
#include "CheesePizza.h"
#include "GreekPizza.h"
#include "PipperPizza.h"
#include "log.h"

SimplePizzaFactory::SimplePizzaFactory(void)
{
}

SimplePizzaFactory::~SimplePizzaFactory(void)
{
}
AbstractPizza* SimplePizzaFactory::CreatePizzaByType(PizzaType type)
{
	switch (type)
	{
	case SimplePizzaFactory::CheesePizzaTpe:
		{
			return new CheesePizza;
			//if you want, you can do additional initialization for new CheesePizza;
			//like: 
			//AbstractPizza* pizza = new CheesePizza;
			//assert(pizza);
			//pizza->Initialize();
		}
	case SimplePizzaFactory::GreekPizzaType:
		{
			return new GreekPizza;
			//if you want, you can do additional initialization for new CheesePizza;
		}
	case SimplePizzaFactory::PipperPizzaType:
		{
			return new PipperPizza;
			//if you want, you can do additional initialization for new CheesePizza;
		}
	default:
		TRACE_FUCTION_AND_LINE("Unknown pizzatype:%d", type);
		return 0;
	}
}