#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class Span {

private:
	unsigned int len_;
	std::multiset<int> mySet_;
	Span();

public:

	//"=================CONSTRUCTORS================="//
	~Span();
	Span(const Span & cl_copy);
	Span(unsigned int len);

	//"=================OVERLOADS================="//
	Span & operator=(const Span & overload);

	//"=================ACCESSORS================="//
	unsigned int getLen() const;

	//"=================FUNCTIONS================="//
	void addNumber(unsigned int n);
	void addNumber(unsigned int first, unsigned int last);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	//"=================EXCEPTIONS================="//
	class OutOfVector: public std::exception {
	public:
		virtual const char * what() const throw();
	};

	class TooFewArgs: public std::exception {
	public:
		virtual const char * what() const throw();
	};
	//"=================TEMPLATE================="//

	template <typename InputIterator>
	void addNumber(InputIterator first, InputIterator last) {
		unsigned int size = mySet_.size() + std::distance(first, last);
		if (size > len_) { throw OutOfVector(); }
		for (std::multiset<int>::iterator i = first; *i < *last; i++) {
			mySet_.insert(*i);
		}
	}

};



#endif