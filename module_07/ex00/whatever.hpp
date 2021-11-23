#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void swap(T & ex1, T & ex2) {
	T tmp;
	tmp = ex1;
	ex1 = ex2;
	ex2 = tmp;
}

template <typename T>
const T & min(const T & a, const T & b) {
	return (a < b ? a : b);
}

template <typename T>
const T & max(const T & a, const T & b) {
	return (a > b ? a : b);
}

#endif
