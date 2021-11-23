#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	
	///////------------------------------------VARIABLES------------------------------------///////
	
		const std::string _name;
		bool _isSigned;
		const int _gradeToExecute;
		const int _gradeToSign;

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Form();
		~Form();
		Form(const Form& cl_copy);
		Form(const std::string name, const int gradeToExecute, const int gradeToSign);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Form& operator=(const Form& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToExecute() const;
		int getGradeToSign() const;
	
	///////------------------------------------FUNCTIONS------------------------------------///////
	
		void beSigned(const Bureaucrat& bur);
		virtual void execute(Bureaucrat const & executor) const = 0;

	///////------------------------------------EXCEPTIONS------------------------------------///////
		
		class GradeTooHighException: public std::exception {
		
		public:
			virtual const char* what() const throw();
			
		};
		
		class GradeTooLowException: public std::exception {
		
		public:
			virtual const char* what() const throw();
		
		};
		
		class FormIsNotSigned: public std::exception {
			virtual const char* what() const throw();
		};
};

///////------------------------------------OVERLOADS------------------------------------///////

	std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif

///////------------------------------------THE_END------------------------------------///////
