/**************************************************
 * TNG033: set 1, exercise 4                       *
 * See lecture 3                                   *
 * Test program for  Lists                         *
 * *************************************************/

#include <iostream>
#include <iomanip>
#include "list.h"

int main() {
    List L = nullptr;  // empty list

    std::cout << "L:  " << L << '\n';

    std::cout << "\nInserting ..." << '\n';

    insert_first(L, 30);
    insert_first(L, 20);
    insert_first(L, 15);
    insert_first(L, 10);

    std::cout << "L: " << L;  // 10->15->20->30

    std::cout << "\nSearching ...\n";

    if (is_member(L, 10)) {  // first value
        std::cout << "Found 10\n";
    }
    else {
        std::cout << "10 not found!!\n";
    }

    if (is_member(L, 30)) {  // last value
        std::cout << "Found 30\n";
    }
    else {
        std::cout << "30 not found!!\n";
    }

    if (is_member(L, 40)) {  // does not exist
        std::cout << "Found 40\n";
    }
    else {
        std::cout << "40 not found!!\n";
    }

    if (is_member(L, 15)) {  // in the list
        std::cout << "Found 15\n";
    }
    else {
        std::cout << "15 not found!!\n";
    }

    /* ******** Test exercise functions ********* */

    std::cout << "\nInsert sorted ...\n";

    insert_sorted(L, 23);
    insert_sorted(L, 32);
    insert_sorted(L, 8);

    std::cout << "L: " << L << '\n';  // 8->10->15->20->23->30->32

    std::cout << "\nRemoving ...\n";

    remove(L, 32);
    remove(L, 8);
    remove(L, 20);

    std::cout << "L: " << L << '\n';  // 10->15->23->30

    std::cout << "\nInsert last ...\n";

    insert_last(L, 30);
    insert_last(L, 23);
    insert_last(L, 15);

    std::cout << "L: " << L << '\n';  // 10->15->23->30->30->23->15

    std::cout << "\nFree all memory used by the list ...\n";
    make_empty(L);

    std::cout << "L: " << L << '\n';
}

/* Expected output

L:  List is empty!!

Inserting ...
L: 10->15->20->30->

Searching ...
Found 10
Found 30
40 not found!!
Found 15

Insert sorted ...
L: 8->10->15->20->23->30->32->

Removing ...
L: 10->15->23->30->

Insert last ...
L: 10->15->23->30->30->23->15->

Free all memory used by the list ...
L: List is empty!!

*/