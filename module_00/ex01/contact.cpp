#include "contact_header.hpp"

Contact::Contact() {
	this->ind = 0;
}

Contact::~Contact() {}

std::string	Contact::get_name(std::string str) {
	if (str == "first_name")
		return (this->first_name);
	if (str == "last_name")
		return (this->last_name);
	if (str == "nickname")
		return (this->nickname);
	if (str == "phonenumber")
		return (this->phone_number);
	if (str == "secret")
		return (this->darkest_secret);
}

void	Contact::set_names() {
	std::cout << "Please enter:" << std::endl;
	std::cout << "Firtst name - ";
	std::getline(std::cin, first_name);
	std::cout << "Last_name - ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname - ";
	std::getline(std::cin, nickname);
	std::cout << "Phone_number - ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest_secret - ";
	std::getline(std::cin, darkest_secret);
}

void	Contact::set_index(int i) {
	ind = i + 1;
}

int	Contact::get_index() {
	return (ind);
}