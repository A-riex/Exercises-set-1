/**************************************************
 * TNG033: Lesson 1                                *
 * Exercise 2                                      *
 * *************************************************/

#include <iostream>

using namespace std;    // Better practice to not use this.


//Add definintion of function my_swap
void my_swap(char* p1, char* p2) {
    char h;
    h = *p1;
    *p1 = *p2;
    *p2 = h;

    return;
}


int main() {
    auto p1 = new char('A');
    auto p2 = new char('B');

    cout << "Before my swap: *p1 = " << *p1 << "  *p2 = " << *p2 << endl;

    my_swap(p1, p2);

    cout << "After my swap: *p1 = " << *p1 << "  *p2 = " << *p2 << endl;

    // free the dynamically allocated memory
    delete p1;
    delete p2;

    return 0;
}

/* Expected output

Before my swap: *p1 = A  *p2 = B
After my swap: *p1 = B  *p2 = A

*/