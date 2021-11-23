#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

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

using std::cout;
using std::endl;

template <typename T>
class Array {

private:
	T * arr_;
	unsigned int len_;

public:
	Array() {
		cout << BOLDBLUE << "===Default constructor has been called!===" << RESET << endl;
		len_ = 0;
		arr_ = new T[0];
	}

	~Array() {
		cout << BOLDYELLOW << "===Destructor has been called!===" << RESET << endl;
		if (arr_) { delete [] arr_; }
	}

	Array(unsigned int n) {
		cout << BOLDBLUE << "===Constructor has been called!===" << RESET << endl;
		len_ = n;
		arr_ = new T[n];
		for (unsigned int i = 0; i < len_; ++i) { arr_[i] = 0; }
	}

	Array(const Array & cl_copy) {
		cout << BOLDBLUE << "===Copy constructor has been called!===" << RESET << endl;
		len_ = cl_copy.size();
		arr_ = new T[len_];
		for (unsigned int i = 0; i < len_; ++i) { arr_[i] = cl_copy.arr_[i]; }
	}

	Array & operator=(const Array & overload) {
		cout << BOLDBLUE << "===Overload '=' has been called!===" << RESET << endl;
		if (this == &overload) { return *this; }
		if (arr_) { delete [] arr_; }
		len_ = overload.size();
		arr_ = new T[len_];
		for (unsigned int i = 0; i < len_; ++i) { arr_[i] = overload.arr_[i]; }
		return *this;
	}

	unsigned int size() const { return len_; }

	T & operator[](unsigned int ind) {
		if (ind < 0 || ind >= len_) { throw OutOfRange(); }
		return (arr_[ind]);
	}

	const T & operator[](unsigned int ind) const {
		if (ind < 0 || ind >= len_) { throw OutOfRange(); }
		return (arr_[ind]);
	}

	class OutOfRange: public std::exception {
	public:
		virtual const char * what() const throw() { return ("Out_Of_Range!"); }
	};

};

template <typename T>
std::ostream & operator<<(std::ostream & out, Array<T> & arr) {
	out << CYAN << "Size of array: " << arr.size() << endl;
	for (unsigned int i = 0; i < arr.size(); ++i) {
		out << arr[i] << endl;
	}
	out << RESET;
	return (out);
}

#endif