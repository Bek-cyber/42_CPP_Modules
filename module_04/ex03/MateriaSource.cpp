#include "MateriaSource.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	MateriaSource::MateriaSource() {
		for (int i = 0; i < 4; i++) { _materiaArr[i] = NULL; }
	}
	
	MateriaSource::~MateriaSource() {
		for (int i = 0; i < 4; i++) {
			if (_materiaArr[i]) { delete _materiaArr[i]; }
			_materiaArr[i] = NULL;
		}
	}
	
	MateriaSource::MateriaSource(const MateriaSource& cl_copy) {
		for (int i = 0; i < 4; i++) { _materiaArr[i] = cl_copy._materiaArr[i]; }
	}

///////------------------------------------OVERLOADS------------------------------------///////

	MateriaSource& MateriaSource::operator=(const MateriaSource& overload) {
		for (int i = 0; i < 4; i++) {
			if (_materiaArr[i]) { delete _materiaArr[i]; }
			_materiaArr[i] = overload._materiaArr[i];
		}
		return *this;
	}

///////------------------------------------FUNCTIONS------------------------------------///////

	void MateriaSource::learnMateria(AMateria* materia) {
		for (int i = 0; i < 4; i++) {
			if (_materiaArr[i] == NULL) {
				_materiaArr[i] = materia;
				return ;
			}
		}
		std::cout << "It's full!" << std::endl;
		delete materia;
	}
	
	AMateria* MateriaSource::createMateria(const std::string &type) {
		for (int i = 0; i < 4; i++) {
			if (_materiaArr[i]!= NULL && !_materiaArr[i]->getType().compare(type)) {
				return (_materiaArr[i]->clone());
			}
		}
		return 0;
	}

///////------------------------------------THE_END------------------------------------///////


