#include "AMateria.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	AMateria::AMateria() {}
	
	AMateria::~AMateria() {}
	
	AMateria::AMateria(const AMateria& cl_copy) { _type = cl_copy.getType(); }
	
	AMateria::AMateria(const std::string &type) { _type = type; }

///////------------------------------------OVERLOADS------------------------------------///////

	AMateria& AMateria::operator=(const AMateria& overload) {
		if (this == &overload) { return *this; }
		_type = overload.getType();
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string const & AMateria::getType() const { return _type; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void AMateria::use(ICharacter &) {}

///////------------------------------------THE_END------------------------------------///////
