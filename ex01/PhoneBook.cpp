#include <iostream>
#include <cctype>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Phonebook::Phonebook() {
	_index = 0;
}

Phonebook::~Phonebook() {}

Contact Phonebook::get_contact(int i) {
	return (_contacts[i]);
}

void	Phonebook::add_contact(Contact contact)
{
	if (_index == 7)
		return ;
	_contacts[_index++] = contact;
}



