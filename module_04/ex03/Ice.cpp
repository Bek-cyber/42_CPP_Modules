#include "Ice.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Ice::Ice(): AMateria("ice") {}
	
	Ice::~Ice() {}
	
	Ice::Ice(const Ice& cl_copy) { _type = cl_copy.getType(); }
	
	Ice::Ice(std::string const & type) { _type = type; }

///////------------------------------------OVERLOADS------------------------------------///////

	Ice& Ice::operator=(const Ice& overload) {
		if (this == &overload) { return *this; }
		_type = overload.getType();
		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	AMateria* Ice::clone() const { return (new Ice(*this)); }
	
	void Ice::use(ICharacter& target) { std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; }

///////------------------------------------THE_END------------------------------------///////
