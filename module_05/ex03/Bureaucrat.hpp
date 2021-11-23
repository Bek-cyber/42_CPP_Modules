#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Colors.hpp"
#include "Form.hpp"

class Form;

class Bureaucrat {

private:
	
	///////------------------------------------VARIABLES------------------------------------///////
		const std::string _name;
		int _grade;

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& cl_copy);
		Bureaucrat(const std::string name, const int grade);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Bureaucrat& operator=(const Bureaucrat& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		std::string getName() const;
		int getGrade() const;
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		void increment();
		void decrement();
		void signForm(Form & form);
		void executeForm(Form const & form);
	
	///////------------------------------------EXCEPTIONS------------------------------------///////

		class GradeTooHighException: public std::exception {
		
		public:
			virtual const char* what() const throw();
			
		};
	
		class GradeTooLowException: public std::exception {
		
		public:
			virtual const char* what() const throw();
			
		};
};

///////------------------------------------OVERLOADS------------------------------------///////

	std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif

///////------------------------------------THE_END------------------------------------///////
