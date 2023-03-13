#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstring>
#include <iostream>

void add(Phonebook *phone_book) {
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter a first name:\n";
	std::getline(std::cin, first_name, '\n');

	std::cout << "Enter a last name:\n";
	std::getline(std::cin, last_name, '\n');

	std::cout << "Enter a nick name:\n";
	std::getline(std::cin, nick_name, '\n');

	std::cout << "Enter a phone number:\n";
	std::getline(std::cin, phone_number, '\n');

	std::cout << "Enter a darkest secret:\n";
	std::getline(std::cin, darkest_secret, '\n');
	if (first_name.empty() || last_name.empty() || nick_name.empty() || phone_number.empty() || darkest_secret.empty()) {
		std::cout << "Fields can't be empty\n";
		return ;
	}
	phone_book->add_contact(Contact(first_name, last_name, nick_name, phone_number, darkest_secret));
}

int	main(void) {
	Phonebook phone_book = Phonebook();

	while (std::cin) {
		std::string command;
		std::cout << "Enter command: \n";
		std::getline(std::cin, command, '\n');

		if (std::strcmp("ADD", command.data()) == 0) {
			add(&phone_book);
		} else if (std::strcmp("EXIT", command.data()) == 0) {
			break ;
		}
	}
	return (0);
}
