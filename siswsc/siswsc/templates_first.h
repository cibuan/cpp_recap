#include <iostream>

template <class T1, class T2>
struct Pair
{
	Pair();
	Pair(const T1 & f, const T2 & s);
	Pair(const Pair<T1, T2> & other);

	Pair<T1, T2> & operator = (const Pair<T1, T2> & other);
	bool operator == (const Pair<T1, T2> & other);
	bool operator != (const Pair<T1, T2> & other);

	void Swap(Pair<T1, T2> & other);

	T1 first;
	T2 second;
};

template <class T1, class T2>
Pair<T1, T2>::Pair()
{
	first = 10;
	second = 10;
}

template <class T1, class T2>
Pair<T1, T2>::Pair(const T1 & f, const T2 & s)
{
	first = f;
	second = s;
}

template <class T1, class T2>
Pair<T1, T2>::Pair(const Pair<T1, T2> & other)
{
	first = other.first;
	second = other.second;
}

template <class T1, class T2>
void Pair<T1, T2>::Swap(Pair<T1, T2> & other)
{
	Pair<T1, T2> temp(first, second);

	first = other.first;
	other.first = temp.first;

	second = other.second;
	other.second = temp.second;
}

template <class T1, class T2>
Pair<T1, T2> & Pair<T1, T2>::operator = (const Pair<T1, T2> & other)
{
	Pair<T1, T2> result(other);
	return result;
}

template <class T1, class T2>
bool Pair<T1, T2>::operator == (const Pair<T1, T2> & other)
{
	if ((first == other.first) && (second == other.second))
		return true;
	else
		return false;
}

template <class T1, class T2>
bool Pair<T1, T2>::operator != (const Pair<T1, T2> & other)
{
	if ((first != other.first) || (second != other.second))
		return true;
	else
		return false;
}

template <class PairType>
void Print(const PairType & pair)
{
	std::cout << '(' << pair.first << ',' << pair.second << ')' << std::endl;
};
