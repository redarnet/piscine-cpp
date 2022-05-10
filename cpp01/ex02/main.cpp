#include <iostream>
#include <string>
/*
int main()
{
	int po = 42;

	int	*poptr = &po;
	int &poref = po;

	std::cout << po ;
	std::cout << po << " " << *poptr <<  " " << poref ;
	po = 33;
	std::cout << poref;
	return 0;
}
*/

/*
void	byPtr(std::string *str)
{
	*str  += " and more";

}

void	byRef(std::string &str)
{
	str += " and strw";
}
int main()
{
	std::string str = "i like nutel";
	std::cout << str << std::endl;
	byPtr(&str);
	std::cout << str << std::endl;
	byRef(str);
	std::cout << str << std::endl;
}
*/


class Student
{
	private:
		std::string _login;
	public :
		Student (std::string const & login): _login(login)
		{
		}
		std::string & getLoginRef()
		{
			return this->_login;
		}
		std::string const & getLoginRefConst() const
		{
			return this->_login;
		}
		std::string *getLoginPtr()
		{
			return &(this->_login);
		}
		std::string const *getLoginPtrConst() const
		{
			return &(this->_login);
		}

};

int main()
{
	Student		charles = Student("Cfubar");
	Student	const	jim = Student("Jfubar");

	std::cout << charles.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(charles.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	charles.getLoginRef() = "charlesfubar";
	std::cout << charles.getLoginRefConst() << std::endl;

	*(charles.getLoginPtr()) = "bobbyfubar";
	std::cout << charles.getLoginRefConst() << std::endl;


}
