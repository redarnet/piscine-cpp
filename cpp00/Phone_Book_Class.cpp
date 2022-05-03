#include <iostream>
#include "Phone_Book_Class.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "Constructeur called" << std::endl;
    return;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Destructeur called" << std::endl;
    return;
}