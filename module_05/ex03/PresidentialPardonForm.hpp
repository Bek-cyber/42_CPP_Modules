#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& cl_copy);
		PresidentialPardonForm(const std::string& target);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		PresidentialPardonForm& operator=(const PresidentialPardonForm& overloads);
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		virtual void execute(Bureaucrat const & executor) const;
	
};

#endif

///////------------------------------------THE_END------------------------------------///////
