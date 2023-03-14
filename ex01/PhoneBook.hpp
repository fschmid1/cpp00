#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		Contact get_contact(int i);
		void add_contact(Contact contact);
		void show_contacts();
	private:
		Contact _contacts[8];
		int		_index;
};

#endif
