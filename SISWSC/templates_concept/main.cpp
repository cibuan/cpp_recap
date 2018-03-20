#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "templates_concept.h"

using namespace std;

void main()
{
	typedef Pair<float, float> Point;

	Point p1(10,20);
	Point p2(15,25);
	Point p3(p1);

	p1.Swap(p2);

	Print(p1);
	Print(p2);
	Print(p3);

	if (p1 != p2)
		std::cout << "different" << std::endl;
	else
		std::cout << "same" << std::endl;

	getchar();
}