/***************************************************************************
 * TNG033: set of exercises 2                                               *
 * Exercise 2b                                                              *
 * **************************************************************************/

#include <iostream>

int* read_seq() {
    //int seq[10];  // local variable not initialized. No numbers in the array och ints.
    int seq[10] = {0};

    std::cout << "Enter a sequence of 10 integers: ";

    for (int i = 0; i < 10; ++i) {
        std::cin >> seq[i];
    }

    // In C++, an array name can be automatically converted to a pointer to the first slot of the
    // array so, the array name "seq" is converted to pointer to an int (int*)
    return seq;             // don't return pointers that point to the stack
                            // they will be deallocated automatically when the function has ended.
}

int main() {
    int* ptr = read_seq();

    for (int i = 0; i < 10; ++i) {
        std::cout << ptr[i] << '\n';
    }
}