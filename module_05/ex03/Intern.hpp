#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Intern();
		~Intern();
		Intern(Intern const & cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Intern& operator=(const Intern& overload);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		Form * makeForm(std::string const & form, std::string const & target);
	
	///////------------------------------------EXCEPTIONS------------------------------------///////
	
		class WorngFormException: public std::exception {
		
		public:
			
			virtual const char * what() const throw();
		};
	
};

#endif

///////------------------------------------THE_END------------------------------------///////
