//1. Element support: the container needs to work with any data type that has a copy constructor
//2. Memory allocation: just like arrays, the elements of the container need to be stored in continuous memory
//3. The size of the container can grow and shrink (unlike arrays)
//4. Avoid reallocating memory on every element insertion at the end (PushBack)
//5. Random access using [] operator
//6. Implement vectors interators
//7. Make the iterators STL compatible
//8. Support element erase
//9. Any usability improvement

template <class T1>
class Vectrix
{
public:
	// common constructor
	Vectrix();
	Vectrix(const T1 t);

	//copy constructor

	//asignment operator override

	//destructor
	~Vectrix();

private:
	T1* vectrix_array;
};