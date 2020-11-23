/****************************************************************************
 * TNG033: set of exercises 2                                               *
 * Exercise 2a                                                              *
 * **************************************************************************/

#include <iostream>
#include <cstdlib>    //rand()
#include <algorithm>  //std::swap

 // Return the median of n integers generated randomly
double median_n(int n) {
    int* A = new int[n]; 

    for (int i = 0; i < n; ++i) {
        A[i] = std::rand();
    }

    // Sort: bubble sort
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                std::swap(A[j], A[j + 1]);
            }
        }
    }

    double result = (A[n / 2] + A[(n - 1) / 2]) / 2;

    return result;
}

int main() {
    for (int i = 20; i < 30; ++i) {
        std::cout << "Median = " << median_n(i) << '\n';
    }
}