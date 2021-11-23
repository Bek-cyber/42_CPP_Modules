#include "Point.hpp"

int main()
{
	Point a(5, 5), b(10,5), c(5, 10);
	float x, y;
	while (1)
	{
		std::cout << "Hello my friend! PLease enter:" << std::endl;
		std::cout << "x = ";
		std::cin >> x;
		std::cout << "y = ";
		std::cin >> y;
		std::cout << "Thanks!" << std::endl << std::endl;
		Point p(x, y);
		if (bsp(a, b, c, p)) {
			std::cout << "The point is inside the triangle :)" << std::endl << std::endl;
		}
		else {
			std::cout << "The point is outside the triangle or is a vertex or is on the edge :/" << std::endl << std::endl;
		}
	}
	return 0;
}

/*
 * 7 7 - inside
 * 1 7 - outside
 * 9 7 - outside
 * link to check - https://planetcalc.ru/8108/
 */