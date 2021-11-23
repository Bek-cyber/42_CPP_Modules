#include "easyfind.hpp"

int main() {
	{
		std::cout << BOLDBLACK << "==================TEST_1==================" << RESET << std::endl;

		std::vector<int> myVector;
		for (int count = 0; count < 5; ++count) { myVector.push_back(count); }
		try {
			std::vector<int>::const_iterator it = easyfind(myVector, 3);
			if (it != myVector.end()) { std::cout << GREEN << "valaue - " << *it << RESET << std::endl; }
		}
		catch (std::exception & e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}

		std::cout << BOLDBLACK << "================TEST_1_END================" << RESET << std::endl;
	}

	{
		std::cout << '\n' << BOLDBLACK << "==================TEST_2==================" << RESET << std::endl;

		std::list<int> myList;
		for (int count = 0; count < 5; ++count) { myList.push_back(count); }
		try {
			std::list<int>::const_iterator it = easyfind(myList, 3);
			if (it != myList.end()) { std::cout << GREEN << "valaue - " << *it << RESET << std::endl; }
		}
		catch (std::exception & e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout << BOLDBLACK << "================TEST_2_END================" << RESET << std::endl;
	}

	{
		std::cout << '\n' << BOLDBLACK << "==================TEST_3==================" << RESET << std::endl;

		std::list<int> myList;
		for (int count = 0; count < 5; ++count) { myList.push_back(count); }
		try {
			std::list<int>::const_iterator it = easyfind(myList, 8);
			if (it != myList.end()) { std::cout << GREEN << "valaue - " << *it << RESET << std::endl; }
		}
		catch (std::exception & e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout << BOLDBLACK << "================TEST_3_END================" << RESET << std::endl;
	}

	{
		std::cout << '\n' << BOLDBLACK << "==================TEST_4==================" << RESET << std::endl;

		std::list<int> myList;
		for (int count = 0; count < 5; ++count) { myList.push_back(count); }
		try {
			std::list<int>::const_iterator it = easyfind(myList, 8);
			if (it != myList.end()) { std::cout << GREEN << "valaue - " << *it << RESET << std::endl; }
		}
		catch (std::exception & e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout << BOLDBLACK << "================TEST_4_END================" << RESET << std::endl;
	}

}