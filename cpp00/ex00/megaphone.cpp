
#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;
	char c;

	i = 1;
	j = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i != argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = toupper(argv[i][j]);
			std::cout << c;
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);

}
