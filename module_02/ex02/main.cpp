#include "Fixed.hpp"
#include <iostream>

int main( void ) {
//   Fixed a;
//   Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
//   std::cout << a << " ------- a " << std::endl;
//   std::cout << ++a <<  " ------- ++a " << std::endl;
//   std::cout << a << " ------- a " << std::endl;
//   std::cout << a++ << " ------- a++ " << std::endl;
//   std::cout << a * b << " ------- a * b" << std::endl;
//
//   std::cout << b / a << " ------- b / a" << std::endl;
//   std::cout << a << " ------- a to float" << std::endl;
//   std::cout << b << " ------- b to float"<< std::endl;
//   std::cout << a.toInt() << " ------- a to int" << std::endl;
//   std::cout << b.toInt() << " ------- b to int" << std::endl;
//
//   Fixed const c(15.15f), d(3);
//   std::cout << c << " ------- c" << std::endl;
//   std::cout << d << " ------- d" << std::endl;
//   std::cout << c / d << " ------- c / d"<< std::endl;
//   std::cout << Fixed::max( a, b ) << " ------- max a b" << std::endl;
//   std::cout << Fixed::min( c, d ) << " ------- min c d" << std::endl;
//   std::cout << Fixed::max( a, c ) << " ------- max a c" << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
   return 0;
}
/*
0 a 
0.00390625 ++a 
0.00390625 a 
0.00390625 a++ 
0.078125 a * b
1293 b / a
0.0078125 a to float
10.1016 b to float
0 a to int
10 b to int
15.1484 c
3 d
5.05078 c / d
10.1016 max a b
3 min c d
15.1484 max a c
*/

/*
 * $> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>
 */