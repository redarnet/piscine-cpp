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

void	Convert::impossible(const char *str)
{
	std::string S;

	S = str;
	std::string s2 = "+inf";
	std::string s3 = "-inf";
 	std::string s4 = "+inff";
	std::string s5 = "-inff";

	if (S == s2 || S == s2 || S == s4 || S == s5)
	{
	    std::cout << "char: impossible" << std::endl;
	    std::cout << "int: impossible" << std::endl;
	    std::cout << "float: " << S << "f" << std::endl;
	    std::cout << "double: " << S << std::endl;
	    return ;
	}
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : nanf"  <<std::endl;
	std::cout << "double : nan"  << std::endl;

}

void		Convert::to_int(const char *str)
{
	int  i;
	
	i = static_cast<int>(atof(str));
	if (i < 32 || i > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char :" << static_cast<char>(i) << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << static_cast<float>(i) <<  ".0f" <<std::endl;
	std::cout << "double : " << static_cast<double>(i) <<  ".0" << std::endl;
	return ;
}

void		Convert::to_char(const char *str)
{
	char  c;
	
	c = static_cast<int>(atof(str));
	if (c < 32 || c > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char :" << c << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) <<  ".0f" <<std::endl;
	std::cout << "double : " << static_cast<double>(c) <<  ".0" << std::endl;
	return ;
}

void		Convert::to_float(const char *str)
{
	float  f;
	
	f = static_cast<float>(atof(str));
	if (f < 32 || f > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char :" << static_cast<char>(f) << std::endl;
	std::cout << "int : " << static_cast<int>(f) << std::endl;
	std::cout << "float : " << f <<  "f" <<std::endl;
	std::cout << "double : " << static_cast<double>(f) <<   std::endl;
	return ;
}


void		Convert::to_double(const char *str)
{
	double  d;
	
	d = static_cast<double>(atof(str));
	if (d < 32 || d > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char :" << static_cast<char>(d) << std::endl;
	std::cout << "int : " << static_cast<int>(d) << std::endl;
	std::cout << "float : " << static_cast<float>(d) <<  "f" <<std::endl;
	std::cout << "double : " << d <<   std::endl;
	return ;
}
Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}

void	Convert::convert_string(int type ,const char *str)
{
	void (Convert::*monpoint[5])(const char *str);

	monpoint[0] = &Convert::to_char;
	monpoint[1] = &Convert::to_int;
	monpoint[2] = &Convert::to_float;
	monpoint[3] = &Convert::to_double;
	monpoint[4] = &Convert::impossible;
	(this->*monpoint[type])(str);
	return;
}
