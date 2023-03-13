#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name, std::string phone_number, std::string darkest_secret) {
	_first_name = first_name;
	_last_name = last_name;
	_nick_name = nick_name;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}

Contact::Contact(void) {}

Contact::~Contact() {}

std::string Contact::get_first_name() {
	return (_first_name);
}

std::string Contact::get_last_name() {
	return (_last_name);
}

std::string Contact::get_nick_name() {
	return (_nick_name);
}

std::string Contact::get_phone_number() {
	return (_phone_number);
}

std::string Contact::get_darkest_secret() {
	return (_darkest_secret);
}
