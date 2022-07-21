#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include "Convert.hpp"

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
	int n;

	p = 0;
	n = 0;
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
		if (S[i] == '-')
			n++;
		if (n == 2)
			break;
		if (isdigit(S[i]) == 0 && S[i] != '.' && S[i] && S[i] != '-')
			break;
		if (i + 2 == S.length())
			return type_f_or_d(S[S.length() - 1]);
	}
 	
	return 4;
}

int main(int argc,const char **argv)
{
	Convert A;
	
	 if (argc != 2)
	 {
	 	std::cout << "Wrong arg" << std::endl;
	 	return 0;
	 }
	int type;
	std::string S;
	 S = argv[1];
	type = get_type(S);
	A.convert_string(type, argv[1]);
	return 0;
}
