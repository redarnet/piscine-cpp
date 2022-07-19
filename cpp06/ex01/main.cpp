#include <iostream>
#include <cstring>

struct Data{
	public :
		int i;
		std::string str;
};

class uintptr_t
{
	public :
		int i;
		std::string str;

};

Data *deserialize(uintptr_t raw)
{
	Data  *a = reinterpret_cast<Data *>(&raw);
	return a;
}

uintptr_t serialize(Data *ptr)
{
	uintptr_t  &a = reinterpret_cast<uintptr_t &>(*ptr);
	return a;
}

// Data *deserialize(uintptr_t raw)
// {

// }

int main(void)
{
	Data *ptr;
	uintptr_t raw;

	ptr = NULL;
	// ptr->i = 0;
	deserialize(raw);
	serialize(ptr);



	return 0;
}
