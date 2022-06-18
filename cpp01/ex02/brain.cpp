
#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF =  str;

//	std::cout << &str << " " << stringPTR << " " << stringREF << std::endl;
//	std::cout << str << " " << *stringPTR << " " << stringREF << std::endl;
	std::cout << "Memory address of string variable  : " << &str << std::endl;
	std::cout << "Memory address of string pointeur  : " << stringPTR << std::endl;
	std::cout << "Memory address of string reference : " << &stringREF << std::endl;
	std::cout << "Value of string variable           : " << str << std::endl;
	std::cout << "Value pointed to by string PTR     : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by string REF     : " << stringREF << std::endl;
	return (0);

}
