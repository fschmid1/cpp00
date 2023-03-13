#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	public:
		Contact(std::string first_name, std::string last_name, std::string nick_name, std::string phone_number, std::string darkest_secret);
		~Contact();
		Contact();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nick_name();
		std::string get_phone_number();
		std::string get_darkest_secret();
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif
