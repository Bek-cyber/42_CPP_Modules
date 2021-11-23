#include "ShrubberyCreationForm.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	ShrubberyCreationForm::ShrubberyCreationForm(): Form() {}
	
	ShrubberyCreationForm::~ShrubberyCreationForm() {}
	
	ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cl_copy): Form(cl_copy) {}
	
	ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form(target, 137, 145) {}

///////------------------------------------OVERLOADS------------------------------------///////

	ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &overloads) {
		if (this == &overloads) { return *this; }
		Form::operator=(overloads);
		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
		if (executor.getGrade() > this->getGradeToExecute()) { throw GradeTooLowException(); }
		if (this->getIsSigned() == false) { throw FormIsNotSigned(); }
		std::ofstream fd(this->getName() + "_shrubbery");
		fd	<<				"    	  _-_" << std::endl
			<<				"	  //~     ~\\" << std::endl
			<<				"  //~           ~\\" << std::endl
			<<				"{                   }" << std::endl
	  		<<				"  \\  _-     -_  //" << std::endl
			<<				"     ~  \\ //  ~" << std::endl
			<<				"  _- -   | | _- _" << std::endl
			<<				"    _ -  | |   -_" << std::endl
			<<				"        // \\" << std::endl;
		
		fd	<<			"		  _-_" << std::endl
			<<			"	  //~     ~\\" << std::endl
			<<			"  //~           ~\\" << std::endl
			<<			"{                   }" << std::endl
			<<			"  \\  _-     -_  //" << std::endl
			<<			"     ~  \\ //  ~" << std::endl
			<<			"  _- -   | | _- _" << std::endl
			<<			"    _ -  | |   -_" << std::endl
			<<			"        // \\" <<std::endl;
		
		fd	<<				"		  _-_" << std::endl
			<<				"	  //~     ~\\" << std::endl
			<<				"  //~           ~\\" << std::endl
			<<				"{                   }" << std::endl
			<<				"  \\  _-     -_  //" << std::endl
			<<				"     ~  \\ //  ~" << std::endl
			<<				"  _- -   | | _- _" << std::endl
			<<				"    _ -  | |   -_" << std::endl
			<<				"        // \\" << std::endl;
		
		fd.close();
	}

///////------------------------------------THE_END------------------------------------///////
