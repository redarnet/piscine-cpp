#ifndef PHONE_BOOK_H
# define PHONE_BOOk_H


# include "Contact_Class.hpp"

class Phonebook
{
	public:
        	Phonebook( void);
		~Phonebook( void);

		void	ft_search(void);
		void	ft_add(void);
		void	ft_affiche_contact(void);
	private :
		Contact contacts[8];
		int nb;
		int count;

};

#endif
