
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _n(0)
{
	return ;
}

Fixed::Fixed(const Fixed & src)
{
	*this = src;
	return ;
}

Fixed::Fixed(int const n) : _n(n << 8)
{
}

Fixed::Fixed(float const n)
{
	this->_n = n * (256);
}


Fixed::~Fixed(void)
{
	return ;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "GetRawBits member function called" << std::endl;
	return this->_n;
}

int	Fixed::getValue() const
{
	return this->_n;
}

void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_n / 256);
}

int Fixed::toInt(void) const
{
	return (this->_n >> _b);
}

std::ostream & operator<<(std::ostream & a, Fixed const & rhs)
{
	a << rhs.toFloat();
	return a;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getValue();
	return *this;
}

Fixed  & Fixed::operator++()
{
	// std::cout << "++  prefix assignment operator called" << std::endl;
	_n++;
	return *this;
}

Fixed  & Fixed::operator--()
{
	// std::cout << "--  preifx assignment operator called" << std::endl;
	_n--;
	return *this;
}

Fixed   Fixed::operator++(int)
{
	// std::cout << "++  postfix assignment operator called" << std::endl;
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed   Fixed::operator--(int)
{
	// std::cout << "++  postfix assignment operator called" << std::endl;
	Fixed temp = *this;
	--*this;
	return temp;
}

bool Fixed::operator>(Fixed const & rhs)const
{
	// std::cout << " >  assignment operator called" << std::endl;
	return (this->_n > rhs._n);
}

bool  Fixed::operator<(Fixed const & rhs)const
{
	// std::cout << " <  assignment operator called" << std::endl;
	return (this->_n < rhs._n);
}

bool Fixed::operator>=(Fixed const & rhs)
{
	// std::cout << ">=  assignment operator called" << std::endl;
	return (this->_n >= rhs._n);
}

bool  Fixed::operator<=(Fixed const & rhs)
{
	// std::cout << " <=  assignment operator called" << std::endl;
	return (this->_n <= rhs._n);
}

bool  Fixed::operator==(Fixed const & rhs)
{
	// std::cout << " ==  assignment operator called" << std::endl;
	return (this->_n == rhs._n);
}

bool  Fixed::operator!=(Fixed const & rhs)
{
	// std::cout << " !=  assignment operator called" << std::endl;
	return (this->_n != rhs._n);
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	// std::cout << "+  assignment operator called" << std::endl;
	return Fixed((_n + rhs.toFloat()) / (1 << 8));
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	// std::cout << "-  assignment operator called" << std::endl;
	return Fixed((_n - rhs.toFloat()) / (1 << 8));
}

// Fixed Fixed::operator*(Fixed const & rhs) const
// {
// 	// std::cout << "*  assignment operator called" << std::endl;
// 	std::cout << rhs.toFloat() << std::endl;
// 	return Fixed((_n * rhs.toFloat()) / (1 << 8));
// }

Fixed Fixed::operator*(Fixed const & rhs) const
{
	//Fixed tmp;

	return (Fixed(this->toFloat() * rhs.toFloat()));
	//tmp = _n;
	// std::cout << "*  assignment operator called" << std::endl;
	// return Fixed((_n * rhs.toFloat()) / (1 << 8));
}



Fixed Fixed::operator/(Fixed const & rhs) const
{
	// std::cout << "/ assignment operator called" << std::endl;
	return Fixed((_n / rhs.toFloat()) / (1 << 8));
}

Fixed const & Fixed::min(Fixed const & i, Fixed  const & y)
{
	//std::cout << "min const " << std::endl;
	if (i < y)
		return i;
	else
		return y;
}

Fixed  & Fixed::min(Fixed & i, Fixed & y)
{
	//std::cout << "min " << std::endl;
	if (i < y)
		return i;
	else
		return y;
}

Fixed const & Fixed::max(Fixed const & i, Fixed const & y)
{
	if (i > y)
		return i;
	else
		return y;
}

Fixed & Fixed::max(Fixed & i, Fixed & y)
{
	if (i > y)
		return i;
	else
		return y;
}
