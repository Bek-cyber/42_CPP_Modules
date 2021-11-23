#include "Form.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Form::Form(): _name("noName"), _isSigned(false), _gradeToExecute(150), _gradeToSign(150) {}
	
	Form::~Form() {}
	
	Form::Form(const Form &cl_copy): _name(cl_copy._name), _isSigned(cl_copy._isSigned), _gradeToExecute(cl_copy._gradeToExecute), _gradeToSign(cl_copy._gradeToSign) {}
	
	Form::Form(const std::string name, const int gradeToExecute, const int gradeToSign): _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign) {
		if (gradeToExecute < 1 || gradeToSign < 1) { throw Form::GradeTooHighException(); }
		if (gradeToExecute > 150 || gradeToSign > 150) { throw Form::GradeTooLowException(); }
		_isSigned = false;
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Form& Form::operator=(const Form& overload) {
		if (this == &overload) { return *this; }
		_isSigned = overload.getIsSigned();
		return *this;
	}
	
	std::ostream& operator<<(std::ostream& out, const Form& obj) {
		out << MAGENTA << "Document " << obj.getName() << ": sign status - " << obj.getIsSigned()
			<< "; Grade to sign - " << obj.getGradeToSign() << "; Grade to execute - "
			<< obj.getGradeToExecute() << RESET << std::endl;
		return out;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string Form::getName() const { return _name; }
	
	bool Form::getIsSigned() const { return _isSigned; }
	
	int Form::getGradeToExecute() const { return _gradeToExecute; }
	
	int Form::getGradeToSign() const { return _gradeToSign; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void 	Form::beSigned(const Bureaucrat &bur) {
		if (bur.getGrade() <= _gradeToSign) { _isSigned = true; }
		else { throw Form::GradeTooLowException(); }
	}

///////------------------------------------EXCEPTIONS------------------------------------///////

	const char* Form::GradeTooHighException::what() const throw() {
		return "Yoooooo! Grade is too high!";
	}
	
	const char* Form::GradeTooLowException::what() const throw() {
		return "Yoooooo! Grade is low high!";
	}

///////------------------------------------THE_END------------------------------------///////
