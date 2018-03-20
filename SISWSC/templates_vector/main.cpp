#include <iostream>
#include <vector>
#include "templates_vector.h"

using namespace std;

void main()
{
	std::vector<int> aaa;
	aaa.push_back(5);

	for (std::vector<int>::iterator it = aaa.begin(); it != aaa.end(); ++it)
	{
		std::cout << ' ' << *it;
	}

	getchar();
}