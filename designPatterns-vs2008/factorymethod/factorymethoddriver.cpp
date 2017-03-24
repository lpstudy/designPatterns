#include <iostream>
#include "BubbleCreator.h"
#include "TubeCreator.h"
#include "TubeLight.h"
#include "BubbleLight.h"

using namespace  std;

int main()
{
	BubbleCreator bubbleCreator;
	AbstractLight* bubbleLight =  bubbleCreator.CreateLight();
	delete bubbleLight;

	TubeCreator tubeCreator;
	AbstractLight* tubeLight =  tubeCreator.CreateLight();
	delete tubeLight;
	return 0;
}