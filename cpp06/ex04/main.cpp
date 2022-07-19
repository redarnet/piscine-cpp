#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include "Convert.hpp"

// 22424.f> passe
int type_f_or_d(char c)
{
	if (c == 'f')
		return 2;
	else if (isdigit(c) != 0)
		return 3;
	return 4;
}

int	get_type(std::string S)
{
	int p;

	p = 0;
	if (S.length() == 1)
	{
		if (isdigit(S[0]) == 0)
			return 1;
		return 0;
	}
	for (unsigned int i = 0; i < S.length(); i++)
	{
		if (isdigit(S[i]) == 0)
			break;
		if (i + 1 == S.length())
			return 1;
	}
	for (unsigned int i = 0; i < S.length(); i++)
	{
		if (S[i] == '.')
			p++;
		if (p == 2)
			break;
		if (isdigit(S[i]) == 0 && S[i] != '.')
			break;
		if (i + 2 == S.length())
			return type_f_or_d(S[S.length() - 1]);
	}
	return 4;
}

int main(int argc,const char **argv)
{
	 Convert A;
	// float f;
	 if (argc != 2)
	 {
	 	std::cout << "Wrong arg" << std::endl;
	 	return 0;
	 }
	int type;
	std::string S;
	 S = argv[1];
	type = get_type(S);
	A.to_int(argv[1]);

	// f = A.string_float(argv[1]);
	 std::cout << "i = " << type << std::endl;

	// try
	// {
	// 	int i = A.to_int(f);
	// 	std::cout << "i = " << i << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << "erro" << std::endl;
	// }
		// int i = static_cast<int>(atof(argv[1]));
		// int i = static_cast<int>(std::stof(argv[1]));
	//  try
	//  {
	//  	float f = static_cast<float>(std::stof(S));
	//  	std::cout << "f = " << f << std::endl;
	//  }
	//  catch (std::exception & e)
	//  {
	//  	std::cout << "erro" << std::endl;
	//  }
	// try
	// {
	// 	double d = static_cast<float>(atof(argv[1]));
	// 	std::cout << "d = " << d << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << "erro" << std::endl;
	// }
	// try
	// {
	// 	char c = static_cast<char>(atof(argv[1]));
	// 	std::cout << "c = " << c << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << "erro" << std::endl;
	// }



	return 0;
}
