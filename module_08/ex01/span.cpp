#include "span.hpp"

Span::Span(unsigned int len): len_(len) {}

Span::~Span() {}

Span::Span(const Span &cl_copy) {
	len_ = cl_copy.len_;
	mySet_ = cl_copy.mySet_;
}

Span& Span::operator=(const Span &overload) {
	if (this == &overload) { return *this; }
	len_ = overload.len_;
	mySet_ = overload.mySet_;
	return *this;
}

unsigned int Span::getLen() const { return len_; }

void Span::addNumber(unsigned int n) {
	if (mySet_.size() < len_) { mySet_.insert(n); }
	else { throw OutOfVector(); }
}

void Span::addNumber(unsigned int first, unsigned int last) {
	if (mySet_.size() + (last - first) < len_) {
		for (; first < last; ++first) { mySet_.insert(first); }
	}
	else { throw OutOfVector(); }
}

unsigned int Span::shortestSpan() {
	if (mySet_.size() <= 1) { throw TooFewArgs(); }
	std::multiset<int>::iterator first = std::next(mySet_.begin());
	unsigned int diff = *first - *std::prev(first);
	for (; *first < *(mySet_.rbegin()); ++first) {
		unsigned int tmp = *first - *std::prev(first);
		if (tmp < diff) { diff = tmp; }
	}
	return diff;
}

unsigned int Span::longestSpan() {
	if (mySet_.size() <= 1)
		throw TooFewArgs();
	std::multiset<int>::iterator first = mySet_.begin();
	unsigned int diff = *(mySet_.rbegin()) - *first;
	return diff;
}

const char * Span::OutOfVector::what() const throw() {
	return "Out_Of_Vector_Size!";
}

const char * Span::TooFewArgs::what() const throw() {
	return "Too_Few_Args!";
}
