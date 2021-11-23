#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void iter(T * arr, size_t len, void fun(const T &)) {
	for (size_t i = 0; i < len; ++i) {
		fun(arr[i]);
	}
}

#endif