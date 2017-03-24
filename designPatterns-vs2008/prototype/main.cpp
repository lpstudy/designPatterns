#include "Prototype.h"
#include <iostream>
using namespace std;

int main()
{
	Prototype* p = new PrototypeBlue();
	p->Print();
	Prototype* pBlue = p->Clone();
	pBlue->Print();

	delete p;
	delete pBlue;

	return 0;
}