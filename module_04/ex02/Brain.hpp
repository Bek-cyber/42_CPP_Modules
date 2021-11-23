#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "Colors.hpp"

#define NUM_OF_IDEAS 100

class Brain {

protected:
	
	///////------------------------------------VARIABLES------------------------------------///////
	
		std::string _ideas_arr[NUM_OF_IDEAS];

public:
	
	///////------------------------------------CONSTRUCTORS------------------------------------///////
	
		Brain();
		~Brain();
		Brain(const Brain& cl_copy);
	
	///////------------------------------------OVERLOADS------------------------------------///////
	
		Brain& operator= (const Brain& overload);
	
	///////------------------------------------ACCESSERS------------------------------------///////
	
		std::string getIdea(int i) const;
		void setIdea(const std::string& line);
};

#endif

///////------------------------------------THE_END------------------------------------///////
