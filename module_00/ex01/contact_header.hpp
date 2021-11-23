#ifndef CONTACT_HEADER_HPP
# define CONTACT_HEADER_HPP

# include<iostream>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string	darkest_secret;
	int 		ind;

public:
	Contact();
	~Contact();
	std::string	get_name(std::string str); //done
	void		set_index(int i); //done
	void		set_names(); //done
	int			get_index(); //done
};

#endif