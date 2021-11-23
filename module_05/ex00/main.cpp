#include "Bureaucrat.hpp"

int main() {
	
	{
		std::cout << BOLDGREEN << "--------------NORM_TEST--------------" << RESET << std::endl;
		try {
			Bureaucrat Jack("Jack", 36);
			Bureaucrat Frank("Frank", 150);
			Bureaucrat Sam("Sam", 1);
			std::cout << Jack << std::endl;
			std::cout << Frank << std::endl;
			std::cout << Sam << std::endl;
		}
		
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	
	{
		std::cout << BOLDGREEN << "--------------WrongCreate_TEST--------------" << RESET << std::endl;
		try {
			Bureaucrat Nina("Nina", -5);
			Bureaucrat Emily("Emily", 155);
		}
		
		catch (const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	
	{
		std::cout << BOLDGREEN << "--------------WrongIncrement_TEST--------------" << RESET << std::endl;
		Bureaucrat Nina("Nina", 150);
		Bureaucrat Emily("Emily", 1);
		try {
			Emily.increment();
			Nina.increment();
		}
		
		catch (const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	
	{
		std::cout << BOLDGREEN << "--------------WrongDecrement_TEST--------------" << RESET << std::endl;
		Bureaucrat Nina("Nina", 150);
		Bureaucrat Emily("Emily", 1);
		try {
			Nina.decrement();
			Emily.decrement();
		}
		
		catch (const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
}