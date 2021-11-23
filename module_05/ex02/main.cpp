#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	ShrubberyCreationForm house("house");
	RobotomyRequestForm robot("robot");
	PresidentialPardonForm truck("Truck");
	Bureaucrat Jack("Bob", 1);
	Bureaucrat Frank("Egor",150);
	
	std::cout << BOLDBLUE << "Test: " << RESET << std::endl;
	
	try
	{
		Jack.executeForm(house);
		Jack.executeForm(robot);
		Jack.executeForm(truck);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Frank.executeForm(house);
		Frank.executeForm(robot);
		Frank.executeForm(truck);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Jack.signForm(house);
	Jack.signForm(robot);
	Jack.signForm(truck);
	
	Jack.executeForm(house);
	Jack.executeForm(robot);
	Jack.executeForm(truck);
	
	std::cout << house;
	std::cout << robot;
	std::cout << truck;
	
	return (0);
}
