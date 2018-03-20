#include "abcd_hex.h"

string intToCharMethod1(int value)
{
	// first get the hex value from the integer
	stringstream sstream;
	sstream << hex << value;
	string hex = sstream.str();

	// then take it apart byte by byte
	int len = hex.length();
	string result;
	for (int i = 0; i < len; i += 2)
	{
		string byte = hex.substr(i, 2);
		char chr = (char)(int)strtol(byte.c_str(), NULL, 16);
		result.push_back(chr);
	}

	return result;
}

string intToCharMethod2(string value)
{
	// we're always expecting a hex value so get the int from it
	// in case we're given an int then just use atoi for the conversion
	int number = (int)strtol(value.c_str(), NULL, 16);

	// now convert it using bit shifting
	// either using a mask for the most significant bit
	string result;
	result.push_back((number & 0xFF000000) >> 24);
	number = number << 8;
	result.push_back((number & 0xFF000000) >> 24);
	number = number << 8;
	result.push_back((number & 0xFF000000) >> 24);
	number = number << 8;
	result.push_back((number & 0xFF000000) >> 24);

	// or for one the least significant bit
	//char sir[4];
	//sir[3] = number & 0xFF;
	//number = number >> 8;
	//sir[2] = number & 0xFF;
	//number = number >> 8;
	//sir[1] = number & 0xFF;
	//number = number >> 8;
	//sir[0] = number;

	return result;
}