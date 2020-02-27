
#include "Point.hpp"

Point::Point(void) : x(0), y(0) { return; }

Point::Point(int x, int y) : x(x), y(y) { return; }

Point::Point(Point const& src) { *this = src; }

Point::~Point(void) { return; }

Point& Point::operator=(Point const& src)
{
	if (this !=&src)
	{
		this->x = src.x;
		this->y = src.y;
	}
	return *this;
}

Point Point::operator+(Point const& rhs) const {
    Point point(this->x + rhs.x, this->y + rhs.y);

    return point;
}

Point Point::operator-(Point const& rhs) const {
    Point point(this->x - rhs.x, this->y - rhs.y);

    return point;
}

bool Point::operator==(Point const& rhs) const {
    return  (this->x == rhs.x && this->y == rhs.y);
}

bool Point::operator!=(Point const& rhs) const {
    return (this->x != rhs.x || this->y != rhs.y);
}
