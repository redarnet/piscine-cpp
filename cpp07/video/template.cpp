#include <iostream>

template <typename T >
T max(T const &x, T const &y)
{
	return ((x>=y) ? x : y);
}

int foo(int x)
{
	std::cout << "long time " << std::endl;
	return x;
}

int main(void)
{
	int a = 42;
	int b = 21;

	std::cout << "MAX of " << a << " and " << b << " is " ;
	std:: cout << max<int>(a, b) << std::endl;
	std:: cout << max(a, b) << std::endl;

	int ret = max<int>(foo(a), foo(b));
	std::cout << "MAX of " << a << " and " << b << " is " ;
	std:: cout << ret << std::endl;



}
