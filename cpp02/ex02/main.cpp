#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

// int main()
// {
// 	Fixed a(Fixed(-5.1f) * Fixed(9.45f));
// 	Fixed b(Fixed(5) + Fixed(2));
// 	const Fixed e(Fixed(-5.1f) * Fixed(9.45f));
// 	const Fixed f(Fixed(5) + Fixed(2));
// 	Fixed c = b;

// 	std::cout<< "a = " << a << std::endl;
// 	std::cout << "b = " << b << std::endl;
// 	std::cout << "c = " << c << std::endl;
// 	std::cout << "a < b = " << (a < b) << std::endl;
// 	std::cout << "a >b = " << (a > b) << std::endl;
// 	std::cout << "b >= c = " << (b >= c) << std::endl;
// 	std::cout << "b > c = " <<(b > c) << std::endl;
// 	std::cout << "b != c = " <<(b != c) << std::endl;
// 	std::cout << "b == c = " <<(b == c) << std::endl;
// 	std::cout << "a >= c = " <<(a >= c) << std::endl;
// 	std::cout << "a + c = " <<(a + c) << std::endl;
// 	std::cout << "a - c = " <<(a - c) << std::endl;
// 	std::cout << "c / a = " <<(c / a) << std::endl;
// 	std::cout << "a / c = " <<(a / c) << std::endl;
// 	std::cout << "a++ = " << a++  << std::endl;
// 	std::cout << "a-- = " << a++  << std::endl;
// 	std::cout << "--b = " << --b  << std::endl;
// 	std::cout << "++b = " << ++b  << std::endl;
// 	std::cout << "min a b = " << Fixed::min(a, b) << std::endl;
// 	std::cout << "max a b = " << Fixed::max(a, b) << std::endl;
// 	std::cout << "min e f = " << Fixed::min(e, f) << std::endl;
// 	std::cout << "max e f = " << Fixed::max(e, f) << std::endl;
// }
