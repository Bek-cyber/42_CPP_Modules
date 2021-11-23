//#include "Intern.hpp"
//#include "Form.hpp"
//
//
//int main() {
//	Intern *becario = new Intern();
//
//	Form *shrubbery = becario->makeForm( "shrubberyCreationForm", "lol1" );
//	Form *roboto = becario->makeForm( "robotomyRequestForm", "lol2" );
//	Form *presi = becario->makeForm( "presidentialPardonForm", "lol3 " );
//
//	try
//	{
//		std::cout << RED"************ ShrubberyCreationForm ************"WHITE << std::endl;
//		Bureaucrat supervisor( "lol", 1 );
//		shrubbery->beSigned( supervisor );
//		shrubbery->execute( supervisor );
//		std::cout << *shrubbery << std::endl;
//	}
//	catch( const std::exception& e )
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	try
//	{
//		std::cout << RED"************ RobotomyRequestForm ************"WHITE << std::endl;
//		Bureaucrat n ( "Nlol", 1 );
//		roboto->beSigned( n );
//		roboto->execute( n );
//		std::cout << *roboto << std::endl;
//	}
//	catch( const std::exception& e )
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	try
//	{
//		std::cout << RED"************ PresidentialPardonForm ************"WHITE << std::endl;
//		Bureaucrat  k ( "Klol", 1);
//		presi->beSigned( k );
//		presi->execute( k );
//		std::cout << "\n" << *presi << std::endl;
//
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	try
//	{
//		std::cout << RED"************ ExecuteForm ************"WHITE << std::endl;
//		Bureaucrat  l ( "Klol", 50);
//		l.executeForm( *presi );
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
//
//	try
//	{
//		std::cout << RED"************ MakeForm ************"WHITE << std::endl;
//		Form *wrongPresi = becario->makeForm( "Presidential Pardon", "lol3" );
//		std::cout << *wrongPresi << std::endl;
//		delete wrongPresi;
//
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	delete shrubbery;
//	delete roboto;
//	delete presi;
//
//	return (0);
//}

#include "Intern.hpp"

int main () {
	std::cout << std::endl << RED << "CREATION OF INSTANCES" << RESET << std:: endl;
	Intern novichok;
	
	Bureaucrat *Lolo = new Bureaucrat("Lolo", 140);
	std::cout << *Lolo << std::endl;
	Bureaucrat *Vip = new Bureaucrat("VIP", 2);
	std::cout << *Vip << std::endl;
	Form *shrub = novichok.makeForm("shrubberyCreationForm", "garden");
	std::cout << *shrub << std::endl;
	Form *robot = novichok.makeForm("robotomyRequestForm", "Machine");
	std::cout << *robot << std::endl;
	Form *pardon = novichok.makeForm("presidentialPardonForm", "Enemy");
	std::cout << *pardon << std::endl;
	
	Form *wrong = novichok.makeForm("presidentialPardon", "Enemy");
	if (!wrong)
		std::cout << "Not created" << std::endl;
	
	std::cout << std::endl << GREEN << "SHRUBBERYCREATIONFORM" << RESET << std:: endl;
	std::cout << std::endl << RED << "TRY TO EXECUTE UNSIGNED" << RESET << std:: endl;
	try {
		Lolo->executeForm(*shrub);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << RED << "TRY TO EXECUTE WITH LOW GRADE" << RESET << std:: endl;
	try {
		shrub->beSigned(*Lolo);
		std::cout << *shrub << std::endl;
		Lolo->executeForm(*shrub);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << RED << "EXECUTION" << RESET << std:: endl;
	try {
		shrub->beSigned(*Lolo);
		std::cout << *shrub << std::endl;
		Vip->executeForm(*shrub);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << GREEN << "ROBOTOMYREQUESTFORM" << RESET << std:: endl;
	std::cout << std::endl << RED << "TRY TO EXECUTE UNSIGNED" << RESET << std:: endl;
	try {
		Vip->executeForm(*robot);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << RED << "TRY TO EXECUTE WITH LOW GRADE" << RESET << std:: endl;
	try {
		robot->beSigned(*Vip);
		std::cout << *robot << std::endl;
		Lolo->executeForm(*robot);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << RED << "EXECUTION" << RESET << std:: endl;
	try {
		robot->beSigned(*Vip);
		std::cout << *robot << std::endl;
		Vip->executeForm(*robot);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << GREEN << "PRESIDENTIALPARDONFORM_HPP" << RESET << std:: endl;
	std::cout << std::endl << RED << "TRY TO EXECUTE UNSIGNED" << RESET << std:: endl;
	try {
		Vip->executeForm(*pardon);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << RED << "TRY TO EXECUTE WITH LOW GRADE" << RESET << std:: endl;
	try {
		pardon->beSigned(*Vip);
		std::cout << *pardon << std::endl;
		Lolo->executeForm(*pardon);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << RED << "EXECUTION" << RESET << std:: endl;
	try {
		pardon->beSigned(*Vip);
		std::cout << *pardon << std::endl;
		Vip->executeForm(*pardon);
	}
	catch(const char *str) {
		std::cout << str << std::endl;
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}




