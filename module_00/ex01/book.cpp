#include "book_header.hpp"

Book::Book() {
	this->counter = 0;
}

Book::~Book() {
	std::cout << "Goodbye! :)" << std::endl;
}

void Book::add_contact() {
	int	i;

	if (this->counter < 8)
		i = this->counter;
	else
		i = this->counter % 8;
	this->contact[i].set_names();
	this->contact[i].set_index(i);
	this->counter += 1;
}

void Book::header_print() {
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First_name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last_name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
}

void Book::print_contact(Contact contact) {
	std::cout << std::setw(10) << contact.get_index();
	std::cout << "|";
	if (contact.get_name("first_name").length() > 10) {
		std::cout << contact.get_name("first_name").substr(0, 9) << ".";
	}
	else {
		std::cout << std::setw(10) << contact.get_name("first_name");
	}
	std::cout << "|";
	if (contact.get_name("last_name").length() > 10) {
		std::cout << contact.get_name("last_name").substr(0, 9) << ".";
	}
	else {
		std::cout << std::setw(10) << contact.get_name("last_name");
	}
	std::cout << "|";
	if (contact.get_name("nickname").length() > 10) {
		std::cout << contact.get_name("nickname").substr(0, 9) << ".";
	}
	else {
		std::cout << std::setw(10) << contact.get_name("nickname");
	}
	std::cout << "|" << std::endl;
}

void Book::print_info(int ind) {
	std::cout << "First_name is " << this->contact[ind - 1].get_name("first_name") << std::endl;
	std::cout << "Last_name is " << this->contact[ind - 1].get_name("last_name") << std::endl;
	std::cout << "Nickname is " << this->contact[ind - 1].get_name("nickname") << std::endl;
	std::cout << "Phonenumber is " << this->contact[ind - 1].get_name("phonenumber") << std::endl;
	std::cout << "Darkest_secret is " << this->contact[ind - 1].get_name("secret") << std::endl;
}

void Book::search_contact() {
	if (this->contact[0].get_name("first_name").empty())
	{
		std::cout << "NO CONTACTS :|" << std::endl;
		return ;
	}
	this->header_print();
	int i;
	for (i = 0; (i < 8 && !this->contact[i].get_name("first_name").empty()); i++) {
		print_contact(this->contact[i]);
	}
	std::cout << "Choose a number of contact: ";
	std::string s;
	std::getline(std::cin, s);
	int	num;
	num = std::atoi(s.c_str());
	if (num < 1 || num > 8) {
		std::cout << "Incorrect input!" << std::endl;
		return ;
	}
	else {
		print_info(num);
	}
}