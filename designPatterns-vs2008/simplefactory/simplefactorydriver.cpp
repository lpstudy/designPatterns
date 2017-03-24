#include <iostream>
#include "SimplePizzaFactory.h"
#include "AbstractPizza.h"
#include "CheesePizza.h"
#include "GreekPizza.h"
#include "PipperPizza.h"
#include "log.h"

using namespace std;

int main()
{
	SimplePizzaFactory* pizzaFactory = new SimplePizzaFactory;
	AbstractPizza* cheesePizza = pizzaFactory->CreatePizzaByType(SimplePizzaFactory::CheesePizzaTpe);
	AbstractPizza* greekPizza = pizzaFactory->CreatePizzaByType(SimplePizzaFactory::GreekPizzaType);
	AbstractPizza* pipperPizza = pizzaFactory->CreatePizzaByType(SimplePizzaFactory::PipperPizzaType);
	AbstractPizza* unknownPizza = pizzaFactory->CreatePizzaByType(SimplePizzaFactory::PizzaType(100));

	delete cheesePizza;
	delete greekPizza;
	delete pipperPizza;
	delete unknownPizza;
	delete pizzaFactory;
	return 0;
}