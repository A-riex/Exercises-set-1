/***************************************************************************
 * TNG033: set of exercises 2                                               *
 * Exercise 1                                                               *
 * **************************************************************************/

#include <iostream>

struct Point {
public:
    Point(int xx, int yy) : x{ xx }, y{ yy } {
    }

    friend std::ostream& operator<<(std::ostream& os, const Point& p);

private:
    int x;
    int y;
};


std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "<" << p.x << "," << p.y << ">";

    return os;
}

int main() {
    Point p1(5.5, 7.8);
    std::cout << "p1 = " << p1 << '\n';

    Point p2{ 3, 4};
    std::cout << "p2 = " << p2 << '\n';

  // Point p3{ 5.5, 7.8 };
   // std::cout << "p3 = " << p3 << '\n';
   // P2 doesn't work due to conversion from double to int
   // we can force the correct input (int)
}