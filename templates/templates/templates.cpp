#include "stdafx.h"
#include <vector>
#include "first.h"

void main()
{
	//typedef Pair<float, float> Point;

	//Point p1(10,20);
	//Point p2(15,25);
	//Point p3(p1);

	//p1.Swap(p2);

	//Print(p1);
	//Print(p2);
	//Print(p3);

	//if (p1 != p2)
	//	std::cout << "different" << std::endl;
	//else
	//	std::cout << "same" << std::endl;

	std::vector<int> aaa;
	aaa.push_back(5);

	for (std::vector<int>::iterator it = aaa.begin(); it != aaa.end(); ++it)
	{
		std::cout << ' ' << *it;
	}

	// waiting on enter
	getchar();

}