#include <iostream>

template <class T>
class Array
{
private:
	int	size_m;
	T	*mass;

public:
	Array( unsigned int size_m = 0 );
	Array( const Array &copy );
	Array	&operator=( const Array &copy );
	~Array();

	T	&operator[]( int index );	
	int	size( void );
};

template <typename T>
Array<T>::Array( unsigned int size_m )
{
	this->size_m = size_m;
	mass = new T [size_m];
}

template <typename T>
Array<T>::Array( const Array &copy )
{
	mass = NULL;
	operator=(copy);
}

template <typename T>
Array<T>	&Array<T>::operator=( const Array &copy )
{
	if (mass)
		delete[] mass;
	size_m = copy.size_m;
	mass = new T [size_m];
	for (int i = 0; i < size_m; i++)
		mass[i] = copy.mass[i];	
	return (*this);
}

template <typename T>
int	Array<T>::size( void )
{
	return (size_m);
}

template <typename T>
T	&Array<T>::operator[]( int index )
{
	if (index < 0 || index >= size_m)
		throw std::out_of_range("Index is out of range");
	return (mass[index]);
}

template <typename T>
Array<T>::~Array( void )
{
	delete[] mass;
}
