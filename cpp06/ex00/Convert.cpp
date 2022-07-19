#include "Convert.hpp"
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>


Convert::Convert()
{
}

Convert::Convert(int i)
{
	std::cout << "int" << std::endl;
	(void)i;
	return ;
}

Convert::Convert( const Convert & src )
{
	*this = src;
}



Convert::~Convert()
{
}

float Convert::string_float(const char *str)
{
	float	f;
	std::string S = str;

	f = static_cast<float>(atof(str));
	// if (S.length() ==  1 && str[0] > 0 && str[0]  < 9)
	// 	return str[0] - 48;
	//  if (S.length() ==  1)
	// 	return str[0];
	return f;
}

Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}

int		Convert::to_int(float S)
{
	return (static_cast<int>(S));
}
