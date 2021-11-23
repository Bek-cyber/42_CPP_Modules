#include "PresidentialPardonForm.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	PresidentialPardonForm::PresidentialPardonForm(): Form() {}
	
	PresidentialPardonForm::~PresidentialPardonForm() {}
	
	PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cl_copy): Form(cl_copy) {}
	
	PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form(target, 5, 25) {}

///////------------------------------------OVERLOADS------------------------------------///////

	PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &overloads) {
		if (this == &overloads) { return *this; }
		Form::operator=(overloads);
		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
		if (executor.getGrade() > this->getGradeToExecute()) { throw GradeTooLowException(); }
		if (this->getIsSigned() == false) { throw FormIsNotSigned(); }
		std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}

///////------------------------------------THE_END------------------------------------///////
