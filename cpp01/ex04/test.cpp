#include <iostream>
#include <fstream>

int main()
{
	std::ifstream ifs("Numbers");
	std::string str;

	if (!ifs)
	{
		std::cout << "pas fonctionne" << std::endl;
		return 0;
	}

	while (getline(ifs, str))
		std::cout << str << std::endl;
	ifs.close();

	std::ofstream ofs("test.out");
	ofs << "ok " << std::endl;
	ofs.close();
}
