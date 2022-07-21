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
	Data *ptr = new Data;
	uintptr_t raw;

	ptr->str =  "hello";
	
	// ptr->i = 0;
	raw = serialize(ptr);
	ptr = deserialize(raw);
	std::cout << "str data= " << ptr->str << std::endl;
	std::cout << "raw data= " << raw.str << std::endl;

	delete ptr;


	return 0;
}
