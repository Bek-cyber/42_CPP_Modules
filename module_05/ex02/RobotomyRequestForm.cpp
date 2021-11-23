#include "RobotomyRequestForm.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	RobotomyRequestForm::RobotomyRequestForm(): Form() {}
	
	RobotomyRequestForm::~RobotomyRequestForm() {}
	
	RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cl_copy): Form(cl_copy) {}
	
	RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form(target, 45, 72) {}

///////------------------------------------OVERLOADS------------------------------------///////

	RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &overloads) {
		if (this == &overloads) { return *this; }
		Form::operator=(overloads);
		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
		if (executor.getGrade() > this->getGradeToExecute()) { throw GradeTooLowException(); }
		if (this->getIsSigned() == false) { throw FormIsNotSigned(); }
		std::cout << YELLOW << "Brrrr...brrrr...brrrr..." << RESET << std::endl;
		if (rand() % 2) { std::cout << GREEN << this->getName() << " has been robotomized successfully 50% of the time!" << RESET << std::endl; }
		else { std::cout << RED << "It’s a failure!" << RESET << std::endl; }
	}

///////------------------------------------THE_END------------------------------------///////
