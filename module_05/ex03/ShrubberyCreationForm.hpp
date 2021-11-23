#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& cl_copy);
		ShrubberyCreationForm(const std::string& target);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& overload);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void execute(Bureaucrat const & executor) const;
};

#endif

///////------------------------------------THE_END------------------------------------///////
