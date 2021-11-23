#include "Intern.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Intern::Intern() {}

	Intern::~Intern() {}
	
	Intern::Intern(const Intern &cl_copy) { (void) cl_copy; }

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Intern& Intern::operator=(const Intern &overload) {
		(void) overload;
		return *this;
	}



///////------------------------------------FUNCTIONS------------------------------------///////

	Form * _presidentialPardonForm(std::string const & target) { return (new PresidentialPardonForm(target)); }
	
	Form * _robotomyRequestForm(std::string const & target) { return (new RobotomyRequestForm(target)); }

	Form * _shrubberyCreationForm(std::string const & target) { return (new ShrubberyCreationForm(target)); }
	
	Form * Intern::makeForm(const std::string &form, const std::string &target) {
		Form * (* functions_arr[3])(std::string const & ) = {_presidentialPardonForm, _robotomyRequestForm, _shrubberyCreationForm};
		std::string string_arr[3] = {"presidentialPardonForm", "robotomyRequestForm", "shrubberyCreationForm"};
		
		for (int i = 0; i < 3; i++) {
			if (string_arr[i] == form) {
				std::cout << GREEN << "Intern creates " << form << RESET << std::endl;
				return ((*functions_arr[i])(target));
			}
		}
			
//		throw Intern::WorngFormException();

		std::cout << BOLDRED << "Yooooo! Wrong form!" << RESET << std::endl;
		
		return NULL;
	}

///////------------------------------------EXCEPTIONS------------------------------------///////

	const char * Intern::WorngFormException::what() const throw() { return "Yooooo! Wrong form!"; }

///////------------------------------------THE_END------------------------------------///////
