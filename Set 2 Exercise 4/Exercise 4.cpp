/**************************************************
 * TNG033: Set of exercises  2                    *
 * Exercise 4                                     *
 * ************************************************/

#include <iostream>
#include <iomanip>  //std::fixed, std::setprecision
#include <utility>  //std::swap

 /*
  * std::size_t can store the maximum size of a theoretically possible object of any type
  */

  /* ************************** *
   * Class my_vector definition *
   * ************************** */
   // Do not use std::vector in the implementation

   // A class to represent growable arrays
class my_vector {
public:
    // constructors
    my_vector();  // default constructor

    // Constructs a vector with count copies of value
    my_vector(std::size_t count, double value = 0.0);

    // Copy constructor
    my_vector(const my_vector& v);

    // Destructor
    ~my_vector();

    // Assignment operator
    my_vector& operator=(my_vector rhs);

    // Return first item
    double front() const {
        return array[0];
    }

    // Return last item
    double back() const {
        return array[_size - 1];
    }

    bool empty() const {
        return (size() == 0);
    }

    std::size_t size() const {
        return _size;
    }

    std::size_t capacity() const {
        return _capacity;
    }

    // Appends the given value to the end of the container
    void push_back(double value);

    // Removes the last element of the container
    void pop_back();

    // Inserts value in slot pos
    void insert(std::size_t pos, double value);

    // Removes the value at slot pos
    void erase(std::size_t pos);

    // Increase the capacity of the container to n
    // If n is greater than the current capacity(), new storage is allocated
    // Otherwise, the function does nothing
    void reserve(std::size_t n);

    // Overloaded operators to compare the contents of two containers, *this and rhs
    bool operator==(const my_vector& rhs) const;
    bool operator!=(const my_vector& rhs) const;

    // Overloaded stream insertion operator
    friend std::ostream& operator<<(std::ostream& os, const my_vector& v);

private:
    double* array;          // pointer to array of values
    std::size_t _size;      // number of values stored in the array
    std::size_t _capacity;  // number of slots in the array
};

/* ****************************** *
 * Class my_vector implementation *
 * ****************************** */

 // Deafult constructor
my_vector::my_vector() : my_vector(2) {  // By default, set capacity to 2
    _size = 0;
}

// Constructs a container with count copies of value
my_vector::my_vector(std::size_t count, double value) 
    : array{ new double[count] }, _size{ count }, _capacity{count} {
    
    for (int i = 0; i < _capacity; i++) {
        array[i] = value;
    }
}

// Copy constructor
my_vector::my_vector(const my_vector& v)
    : array{ new double[v.capacity()] }, _size{ v.size() }, _capacity{ v.capacity() } {

     for (std::size_t i = 0; i < size(); ++i) {
        array[i] = v.array[i];
    }
    
}

// Destructor
my_vector::~my_vector() {
    delete[] array;
    array = nullptr;
    _size = 0;
    _capacity = 0;
}

// Assignment operator
// Implemented with the copy-and-swap idiom as in lecture 6
my_vector& my_vector::operator=(my_vector rhs) {
    std::swap(array, rhs.array);
    std::swap(_size, rhs._size);
    std::swap(_capacity, rhs._capacity);

    return *this;
}

// Appends the given value to the end of the container
void my_vector::push_back(double value) {
    // ADD CODE
}

// Removes the last element of the container
void my_vector::pop_back() {
    // ADD CODE
}

// Inserts value before pos
void my_vector::insert(std::size_t pos, double value) {
    // ADD CODE
}

// Removes the element at pos
void my_vector::erase(std::size_t pos) {
    // ADD CODE
}

// Increase the capacity of the container to n
// If n is greater than the current capacity(), new storage is allocated
// Otherwise, the function does nothing
void my_vector::reserve(std::size_t n) {
    // ADD CODE
}

// Overloaded operators to compare the contents of two containers
bool my_vector::operator==(const my_vector& rhs) const {
    // ADD CODE

    return false;
}

bool my_vector::operator!=(const my_vector& rhs) const {
    // ADD CODE

    return false;
}

// Overloaded stream insertion operator
std::ostream& operator<<(std::ostream& os, const my_vector& v) {
    os << std::fixed << std::setprecision(2);
    os << '[';

    if (v.size() > 0) {
        for (std::size_t i = 0; i < v.size() - 1; ++i) {
            os << v.array[i] << " ";
        }
        os << v.array[v.size() - 1];
    }
    os << ']';

    return os;
}

/* ************** *
 * main function  *
 * ************** */

int main() {
    my_vector V1;

    std::cout << "V1 = " << V1 << '\n';

    /* ***************** */
    V1.push_back(4.5);
    V1.push_back(10.0);
    V1.push_back(10.0);

    std::cout << "V1 = " << V1 << '\n';

    /* ***************** */
    V1.pop_back();
    V1.pop_back();
    V1.pop_back();

    std::cout << "V1 = " << V1 << '\n';

    /* ***************** */
    my_vector V2{ 4, 8.0 };

    std::cout << "V2 = " << V2 << '\n';

    V2.push_back(2.2);
    V2.insert(2, 99.0);

    std::cout << "V2 = " << V2 << '\n';

    V2.erase(2);

    std::cout << "V2 = " << V2 << '\n';

    /* ***************** */
    my_vector V3{ V2 };  // call copy constructor

    std::cout << "V3 = " << V3 << '\n';

    if (V3 == V2) {
        std::cout << "V2 and V3 have same elements.\n";
    }

    /* ***************** */
    V3 = V1;  // assignment operator is called

    std::cout << "V3 = " << V3 << '\n';
}
