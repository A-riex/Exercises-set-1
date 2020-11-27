/***************************************************************************
 * TNG033: set of exercises 2                                              *
 * Exercise 6b                                                             *
 * *************************************************************************/

#include <iostream>

class Integer {
public:
    Integer(int i) : _i{ i } {};

    // Conversion from Integer to int    -- see lecture 8: slides 8 and 9
    operator int() const {
        return _i;
    }


private:
    int _i;
};

class Ten {
public:
    // Conversion from Ten to Integer
    operator Integer() const {
        return Integer{ 10 };
    }
};

int main() {
    Ten ten;
    int V[] = { 9, 6, 8, 4, 3, 1, -1, 0, -2, 18, 200, 24, 70 };

    int value;

    // Does not compile!!
    // value = V[ten];
    // Note: C++ does not allow two implicit user-defined conversions in a row
    // Conversion Ten -> Integer -> int

    // Compiles
    value = V[Integer{ ten }];  // Explicit conversion called: Ten -> Integer
    // Implicit conversion called: Integer -> int

    std::cout << value << '\n';

    // Compiles
    value = V[int{ Integer{ten} }];
    // Two explicit conversions called:  Ten -> Integer -> int

    std::cout << value << '\n';
}
