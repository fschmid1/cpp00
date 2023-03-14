#include <iostream>
#include <iomanip>
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

void	Phonebook::show_contacts() {
	std::string first_name;
	std::string last_name;
	std::string nick_name;

	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nick name" << std::endl;
	for (int i = 0; i < 8; i++) {
		first_name = _contacts[i].get_first_name();
		last_name = _contacts[i].get_last_name();
		nick_name = _contacts[i].get_nick_name();
		if (first_name.length() >= 10) {
			first_name.resize(9);
			first_name.append(".");
		}
		if (last_name.length() >= 10) {
			last_name.resize(9);
			last_name.append(".");
		}
		if (nick_name.length() >= 10) {
			nick_name.resize(9);
			nick_name.append(".");
		}
		std::cout << std::setw(10) << i << "|" << std::setw(10) << first_name << "|" << std::setw(10) << last_name << "|" << std::setw(10) << nick_name << std::endl;
	}
	std::cout << std::endl;
}


