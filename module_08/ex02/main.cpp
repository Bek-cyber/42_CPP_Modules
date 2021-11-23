#include "mutantstack.hpp"
#include <list>

int main() {
	{
		std::cout << BOLDBLACK << "===================TEST_1===================" << RESET << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "Back: " << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << '\n' << BOLDBLACK << "=================TEST_1_END=================" << RESET << std::endl;
	}

	{
		std::cout << '\n' << BOLDBLACK << "===================TEST_2===================" << RESET << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << '\n' << BOLDBLACK << "=================TEST_2_END=================" << RESET << std::endl;
	}
	return 0;
}