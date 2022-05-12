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

void	error(void)
{
	std::cout << "error" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*monpoit)() = &Harl::info;

//	monpoit = &Harl::info;
	//std::cout << monpoit << std::endl;
	monpoit;
//	Harl::info();
}
