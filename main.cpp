#include <iostream>

class Vector
{
public:
    float length() const;
    float lengthSqrt() const;

    float x, y;
};

class Point
{
public:
    Point addVector(Vector v) const;

    float x, y;
};

float Vector::length() const
{
    float length;
    length = sqrt(x * x + y * y);
    return length;
}

float Vector::lengthSqrt() const
{
    float lengthSqrt;
    lengthSqrt = (x * x + y * y);
    return lengthSqrt;
}

Point Point::addVector(Vector v) const
{
    Point pt;
    pt.x = x + v.x;
    pt.y = y + v.y;
    return pt;
}

Vector operator-(Point a, Point b)
{
    Vector v;
    v.x = a.x - b.x;
    v.y = a.y - b.y;
    return v;
}

int main()
{
    Point p {0, -1}; // (0, -1)

    Point i {-1, 1}; // (-1, 1)

    Point c {2, -1}; // (2, -1)

    Vector cp;
    Vector ip;

    cp = p - c;
    ip = p - i;

    float length_sqr_cp = cp.lengthSqrt();
    float length_sqr_ip = ip.lengthSqrt();

    std::cout << length_sqr_cp << '\n';
    std::cout << length_sqr_ip << '\n';

    return 0;
}

