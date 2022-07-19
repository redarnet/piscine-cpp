#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

char	str_to_char(const char *str)
{
	int i;
	char c;

	i =  static_cast<int>(atof(str));
	c = i;
	if (i <= 32 || i >= 62)
		std::cout << "char : impossible" << std::endl;
	else
		std::cout << "char :" << c << std::endl;

	return i;
}

float str_to_float(const char *str)
{
	float f = static_cast<float>(atof(str));
	return f;
}

int str_to_int(const char *str)
{
	int i = static_cast<int>(atof(str));
	return i;
}

int main(int argc, const char **argv)
{
	if (argc != 2)
	{
	 	std::cout << "Wrong arg" << std::endl;
	 	return 0;
	}
		char c;
	c = str_to_char(argv[1]);
		int i;
	i = str_to_int(argv[1]);
	std::cout << "int :" << i << std::endl;
		float f;
	f = str_to_float(argv[1]);
	std::cout << "float :" << f   << "f" << std::endl;
		double d;
	d = str_to_float(argv[1]);
	std::cout << "double :" << d << std::endl;
	return (0);
}
