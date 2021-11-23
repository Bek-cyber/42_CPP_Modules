#include "Character.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Character::Character() {}
	
	Character::~Character() {/* can be double free*/}
	
	Character::Character(const Character &cl_copy) {
		_name = cl_copy._name;
		for (int i = 0; i < 4; i++) {
			if (cl_copy._matArr[i] != NULL)
				_matArr[i] = cl_copy._matArr[i];
			else
				_matArr[i] = NULL;
		}
	}
	
	Character::Character(std::string const & name) {
		_name = name;
		for (int i = 0; i < 4; i++) { _matArr[i] = NULL; }
	}

///////------------------------------------OVERLOADS------------------------------------///////

	Character& Character::operator=(const Character& overload) {
		if (this == &overload) { return *this; }
		_name = overload.getName();
		for (int i = 0; i < 4; i++) {
			if (_matArr[i]) { delete _matArr[i]; }
			_matArr[i] = overload._matArr[i];
		}
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	std::string const & Character::getName() const { return _name; }

///////------------------------------------FUNCTIONS------------------------------------///////

	void Character::equip(AMateria *m) {
		for (int i = 0; i < 4; i++) {
			if (_matArr[i] == NULL) {
				_matArr[i] = m;
				return ;
			}
		}
	}
	
	void Character::unequip(int idx) {
		if (idx >=0 && idx <= 3 && _matArr[idx]) { _matArr[idx] = NULL; }
		else { std::cout << "That materia doesn't exist!" << std::endl; }
	}
	
	void Character::use(int idx, ICharacter &target) {
		if (idx >= 0 && idx <= 3 && _matArr[idx]) { return _matArr[idx]->use(target); }
		else { std::cout << "Wrong arguments!" << std::endl; }
	}

///////------------------------------------THE_END------------------------------------///////
