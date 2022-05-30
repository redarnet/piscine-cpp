#include <iostream>
#include <cstring>



int main(int argc,const char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong arg" << std::endl;
		return 0;
	}
	try
	{
		int i = static_cast<int>(std::stoi(argv[1]));
		std::cout << "i = " << i << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "erro" << std::endl;
	}
	try
	{
		float f = static_cast<float>(std::stof(argv[1]));
		std::cout << "f = " << f << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "erro" << std::endl;
	}
	try
	{
		double d = static_cast<float>(std::stoi(argv[1]));
		std::cout << "d = " << d << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "erro" << std::endl;
	}
	try
	{
		char c = static_cast<char>(std::stoi(argv[1]));
		std::cout << "c = " << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "erro" << std::endl;
	}



	return 0;
}
