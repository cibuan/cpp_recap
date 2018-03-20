#include <iostream>

using namespace std;

int addition(int a, int b)
{
	return (a + b);
}

int substraction(int a, int b)
{
	return (a - b);
}

int operation(int x, int y, int(*functocall)(int, int))
{
	int g = (*functocall)(x, y);

	return g;
}

void main()
{
	int m, n;

	// like an alias
	int(*minus)(int, int) = substraction;

	m = operation(7, 5, addition);
	n = operation(20, m, minus);

	cout << n << endl;

	getchar();
}