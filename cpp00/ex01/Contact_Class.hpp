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
		void	ft_affiche_contact(void);
	private:

		std::string famille;
		std::string prenom;
		std::string surnom;
		std::string secret;
		std::string telephone;
};

#endif
