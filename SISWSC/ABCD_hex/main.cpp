#include <iostream>
#include <sstream>
#include <string>

#include "abcd_hex.h"

using namespace std;

void main()
{
	cout << intToCharMethod1(1094861636) << endl;
	cout << intToCharMethod1(0x41424344) << endl;

	cout << intToCharMethod2("0x41424344") << endl;

	// waiting on enter
	getchar();
}
