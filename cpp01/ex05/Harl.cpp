#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*monpoint[4])(void);
	int i;

	monpoint[0] = &Harl::debug;
	monpoint[1] = &Harl::info;
	monpoint[2] = &Harl::warning;
	monpoint[3] = &Harl::error;
	for (i = 0; i != 3; i++)
	{
		if (level == str[i])
			break;
	}
 	(this->*monpoint[i])();
}
