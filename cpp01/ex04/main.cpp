#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

std::string ft_find(std::string str, std::string find, std::string rep)
{
	size_t found = str.find(find);

	while (found != std::string::npos)
	{
	//	std::cout << found << std::endl;
		str.insert(found, rep);
		found = found + rep.length();
		str.erase(found, find.length());
		found = found - find.length();
		found = str.find(find, found + find.length());
	}
	return str;
}

int main(int argc, const char **argv)
{
	if (argc != 4)
	{
		std::cout << "Need 3 args" << std::endl;
		return 0;
	}
	std::string name;
	std::string av1 = argv[1];
	std::string av2 = argv[2];
	std::string av3 = argv[3];
	std::ifstream ifs(argv[1]);
	std::string res;

	name.append(av1);
	name.append(".replace");
	argv[1].append("e");

	std::ofstream ofs(argv[1]);

	if (!ifs)
	{
		std::cout << "pas fonctionne" << std::endl;
		return 0;
	}
	if (av2 == "")
		return 0;
	while (getline(ifs, av1))
	{
		res = ft_find(av1, av2, av3);
		std::cout << res << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
/*
append
insert
arase
find
*/
