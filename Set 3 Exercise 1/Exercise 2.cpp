/**************************************************
 * TNG033: set of exercises 3                     *
 * Exercise 2                                     *
 * ************************************************/

#include <iostream>
#include <vector>

 // pointer to int
using ptr_to_int = int*;


 // pointer to pointer to char
using ptr_to_ptr_to_char = char**;


 // pointer to array with elements of type char
 // Note: pointer to an array is a pointer to the first slot of the array
using ptr_to_array_of_char = char*;


 // array with 10 pointers to int
using array_of_10_to_int = ptr_to_int[10];


 // A vector with pointers to int
using vector_to_ptr_int = std::vector<int*>;

 // A vector of vectors with pointers to int
using vector_of_vector_ptr_int = std::vector<vector_to_ptr_int>;

int main() {
	ptr_to_int ptr{ new int(3) };
	std::cout << *ptr << std::endl;

}