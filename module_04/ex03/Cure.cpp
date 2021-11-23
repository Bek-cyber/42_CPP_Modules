#include "Cure.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Cure::Cure(): AMateria("cure") {}
	
	Cure::~Cure() {}
	
	Cure::Cure(const Cure& cl_copy) { _type = cl_copy.getType(); }
	
	Cure::Cure(std::string const & type) { _type = type; }

///////------------------------------------OVERLOADS------------------------------------///////

	Cure& Cure::operator=(const Cure& overload) {
		if (this == &overload) { return *this; }
		_type = overload.getType();
		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	AMateria* Cure::clone() const { return (new Cure(*this)); }
	
	void Cure::use(ICharacter& target) { std::cout << "* heals " << target.getName() << " wounds *" << std::endl; }

///////------------------------------------THE_END------------------------------------///////
