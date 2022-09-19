#include <iostream>

class Data
{
private:

public:
	int	n;
	
	uintptr_t	serialize(Data *ptr);
	Data		*deserialize(uintptr_t raw);
};

uintptr_t	Data::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t> (ptr));
}

Data	*Data::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *> (raw));
}
