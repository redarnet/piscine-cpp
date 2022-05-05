#ifndef Contact_H
# define Contact_H

#include <string>

class Contact
{
	public:
		Contact( void);
		~Contact( void);

		void	add_contact(void);
		void	search_contact(void);
	private:

		char prenom[512];
		char famille[512];
		char surnom[512];
		char secret[512];
		char telephone[512];
		//int telephone;

};

#endif
