#include <stdexpect>

void test1()
{
	try
	{
		//do some stuff
		if (/* there s an error*/)
		{
			throw::std::expection();
		}
		else
		{
			//do some stuff
		}
	}
	catch (std::expection e)
	{
		//handle line error
	}
}

void	test2()
{
	//do some stuff here
	if (/* there s an error*/)
	{
		throw std::expection();
	}
	else
	{
		//do some stuff
	}
}

void	test3()
{
	try
	{
		test2();
	}
	catch (std::expection & e)
	{
		//hangle error
	}
}

void	test4()
{
	class PEBCAKExpection : public std::expection
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Problem exists be key and chair");
			}
	};
	try
	{
		test3();
	}
	catch (PEBCAKExpection &e)
	{
		//handle error
	}
	catch (std::expection & e)
	{
		//hangle other expetion like std::expetion
	}
}

