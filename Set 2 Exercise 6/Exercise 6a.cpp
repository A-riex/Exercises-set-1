/**************************************************************************
 * TNG033: set of exercises 2                                              *
 * Exercise 6a                                                             *
 * *************************************************************************/

#include <iostream>

void f(int k) {
    std::cout << k << '\n';
}


class Integer {
public:
    Integer(int i) : _i{ i } {
    }

    // Conversion from Integer to int    -- see lecture 6
    operator int() const {
        return _i;
    }

private:
    int _i;

};


// Test class Integer
int main() {
    Integer i1{ 5 };
    Integer i2{ -1 };

    // Exercise 3a
    // C and C++ has a function operator+(int,int); to add two inst
    // Implicit conversions Integer->int are applied to both arguments
    // of the arithmetic expressions below, so that int+int is performed
    std::cout << "i1+i2 = " << i1 + i2 << '\n';
    std::cout << "i1-i2 = " << i1 - i2 << '\n';
    std::cout << "i1*i2 = " << i1 * i2 << '\n';
    std::cout << "i1/i2 = " << i1 / i2 << '\n';
    std::cout << "i1%i1 = " << i1 % i1 << '\n';

    f(i1);  // implicit conversion from Integer to int
}
