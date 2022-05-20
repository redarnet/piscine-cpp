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
	std::string str[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*monpoint[4])(void);
	int i;

	for (i = 0; i != 4; i++)
	{
		if (level == str[i])
			break;
	}
	if (i == 4)
	{
		std::cout << " Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	monpoint[0] = &Harl::debug;
	monpoint[1] = &Harl::info;
	monpoint[2] = &Harl::warning;
	monpoint[3] = &Harl::error;
	switch (i)
	{
		case 0:
 			(this->*monpoint[0])();
			break;
		case 1:
 			(this->*monpoint[0])();
 			(this->*monpoint[1])();
		case 2:
 			(this->*monpoint[0])();
 			(this->*monpoint[1])();
 			(this->*monpoint[2])();
			 break;
		case 3:
 			(this->*monpoint[0])();
 			(this->*monpoint[1])();
 			(this->*monpoint[2])();
 			(this->*monpoint[3])();
	}
}
