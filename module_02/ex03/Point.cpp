#include "Point.hpp"

///////------------------------------------CONSTRUCTORS------------------------------------///////

	Point::Point(): x(0), y(0) {}

	Point::~Point() {}

	Point::Point(const Point &cl_copy): x(cl_copy.x), y(cl_copy.y) {}

	Point::Point(const float x, const float y): x(x), y(y) {}

///////------------------------------------OVERLOADS------------------------------------///////

	Point& Point::operator=(const Point& overload) {
		if (this == &overload) {
			return *this;
		}
		return *this;
	}

///////------------------------------------ACCESSERS------------------------------------///////

	float Point::get_float_X() const {
		return x.toFloat();
	}

	float Point::get_float_Y() const {
		return y.toFloat();
	}

///////------------------------------------THE_END------------------------------------///////
