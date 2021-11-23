#include "Bureaucrat.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Bureaucrat::Bureaucrat(): _name("noName"), _grade(136)  {}
	
	Bureaucrat::~Bureaucrat() {}
	
	Bureaucrat::Bureaucrat(const Bureaucrat &cl_copy): _name(cl_copy._name), _grade(cl_copy._grade) {}
	
	Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name), _grade(grade) {
		if (grade > 150) { throw Bureaucrat::GradeTooLowException(); }
		if (grade < 1) { throw Bureaucrat::GradeTooHighException(); }
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Bureaucrat& Bureaucrat::operator=(const Bureaucrat& overload) {
		if (this == &overload) { return *this; }
		_grade = overload.getGrade();
		return *this;
	}
	
	std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj) {
		out << YELLOW << "Name - " << obj.getName() << "; His grade - " << obj.getGrade() << RESET << std::endl;
		return out;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string Bureaucrat::getName() const { return _name; }
	
	int Bureaucrat::getGrade() const { return _grade; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void Bureaucrat::increment() {
		if ((_grade + 1) > 150) { throw Bureaucrat::GradeTooLowException(); }
		_grade += 1;
	}

	void Bureaucrat::decrement() {
		if ((_grade - 1) < 1) { throw Bureaucrat::GradeTooHighException(); }
		_grade -= 1;
	}

///////------------------------------------EXCEPTIONS------------------------------------///////

	const char* Bureaucrat::GradeTooHighException::what() const throw() {
		return "Bureaucrat is out, because grade is tooHigh!";
	}
	
	const char* Bureaucrat::GradeTooLowException::what() const throw() {
		return "Bureaucrat is out, because grade is tooLow!";
	}

///////------------------------------------THE_END------------------------------------///////
