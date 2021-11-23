#include "Point.hpp"

float calculator(const Point p1, const Point p2, const Point p3) {

	float res = ((p1.get_float_X() - p3.get_float_X()) * (p2.get_float_Y() - p1.get_float_Y())) -
			((p2.get_float_X() - p1.get_float_X()) * (p1.get_float_Y() - p3.get_float_Y()));

	return res;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float res1, res2, res3;

	res1 = calculator(a, b, point);
	res2 = calculator(b,c, point);
	res3 = calculator(c, a, point);

	return ((res1 < 0 && res2 < 0 && res3 < 0) || (res1 > 0 && res2 > 0 && res3 > 0));
}