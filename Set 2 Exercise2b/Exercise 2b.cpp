/***************************************************************************
 * TNG033: set of exercises 2                                               *
 * Exercise 2b                                                              *
 * **************************************************************************/

#include <iostream>

int* read_seq() {
    int seq[10];

    std::cout << "Enter a sequence of 10 integers: ";

    for (int i = 0; i < 10; ++i) {
        std::cin >> seq[i];
    }

    // In C++, an array name can be automatically converted to a pointer to the first slot of the
    // array so, the array name "seq" is converted to pointer to an int (int*)
    return seq;
}

int main() {
    int* ptr = read_seq();

    for (int i = 0; i < 10; ++i) {
        std::cout << ptr[i] << '\n';
    }
}