#include "span.hpp"

int main() {
	{
		std::cout << '\n' << BOLDBLACK << "====================TEST_1====================" << RESET << std::endl;
		Span span = Span(10);
		std::multiset<int> vec;
		for (int i = 0; i < 8; ++i) { vec.insert(9); }
		try {
			span.addNumber(vec.begin(), vec.end());
			std::multiset<int> vec2;
			vec2.insert(99);
			span.addNumber(vec2.begin(), vec2.end());
		}
		catch (std::exception& ex) { std::cerr << RED << ex.what() << RESET << std::endl ; }

		std::cout << "shortestSpan = " << span.shortestSpan() << std::endl;
		std::cout << "longestSpan = " << span.longestSpan() << std::endl;
		std::cout << BOLDBLACK << "==================TEST_1_END==================" << RESET << std::endl;
	}

	{
		std::cout << '\n' << BOLDBLACK << "====================TEST_2====================" << RESET << std::endl;
		try {
			Span sp = Span(10000);
			for (size_t i = 0; i < 10000; ++i) { sp.addNumber(i); }
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& ex) { std::cerr << RED << ex.what() << RESET << std::endl ; }

		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << BOLDBLACK << "==================TEST_2_END==================" << RESET << std::endl;
	}

	{
		std::cout << '\n' << BOLDBLACK << "====================TEST_3====================" << RESET << std::endl;
		Span span(5) ;
		try {
			span.addNumber(1) ;
			span.addNumber(2) ;
			span.addNumber(4) ;
			span.addNumber(6) ;
			span.addNumber(8) ;

			std::cout << "shortestSpan - " << span.shortestSpan() << std::endl ;
			span.addNumber(5) ;
		}
		catch (std::exception& ex) { std::cerr << RED << ex.what() << RESET << std::endl ; }

		std::cout << BOLDBLACK << "==================TEST_3_END==================" << RESET << std::endl;
	}

	{
		std::cout << '\n' << BOLDBLACK << "====================TEST_4====================" << RESET << std::endl;
		Span span(5) ;
		try {
			span.addNumber(1) ;
			span.shortestSpan() ;
		}
		catch (std::exception& ex) { std::cerr << RED << ex.what() << RESET << std::endl ; }

		std::cout << BOLDBLACK << "==================TEST_4_END==================" << RESET << std::endl;
	}
	return 0;
}
