#ifndef RUSH00_POINT_HPP
#define RUSH00_POINT_HPP

class Point {
public:
    Point(void);
    Point(int x, int y);
    Point(Point const & src);
    ~Point(void);

    Point & operator=(Point const & src);
    Point   operator+(Point const & rhs) const;
    Point   operator-(Point const & rhs) const;

    bool  operator==(Point const & rhs) const;
    bool  operator!=(Point const & rhs) const;

    int   x;
    int   y;
};

#endif
