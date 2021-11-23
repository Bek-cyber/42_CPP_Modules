#ifndef BOOK_HEADER_HPP
# define BOOK_HEADER_HPP

# include<iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
# include "contact_header.hpp"


class Book {
private:
	Contact contact[8];
	int		counter;

public:
	Book(); //done
	~Book(); //done
	void add_contact(); //done
	void search_contact(); //done
	void header_print(); //done
	void print_contact(Contact contact); //done
	void print_info(int ind); //done
};

#endif