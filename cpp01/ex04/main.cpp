#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <regex>


std::string Replace(std::string &str, std::string &sub, const std::string &mod)
{
	std::string tmp;
	tmp = str;
	tmp.replace(tmp.find(sub), mod.length(), mod);
	return tmp;

}
int main(int argc, char **argv)
{
	std::string str;
	std::string name = ".replace";
	std::string av1 = argv[1];
	std::string av2 = argv[2];
	std::string av3 = argv[3];
	std::ifstream ifs(av1);
	std::ofstream ofs(av1 + name);

	if (argc != 4)
	{
		std::cout << "Need 3 args" << std::endl;
		return 0;
	}
	if (!ifs)
	{
		std::cout << "pas fonctionne" << std::endl;
		return 0;
	}
	while (getline(ifs, str))
		std::cout << str.replace(str.find(av2),av3.length(), av3) << std::endl;
	ifs.close();
	ofs.close();
	return 0;
}
