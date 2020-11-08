/*************************************************
 * TNG033: set 1, exercise 4                      *
 * See lecture 3                                  *
 * Definition of functions declared in node.h     *
 * ************************************************/

#include "list.h"

bool is_empty(const List& L) {
    return (L == nullptr);
}

// Delete every node of list L
void make_empty(List& L) {
    while (!is_empty(L)) {
        Node* ptr = L;

        L = L->next;

        delete ptr;
    }
}

// Insert n in the beginning of the list L
void insert_first(List& L, int n) {
    Node* newNode = new Node();

    newNode->value = n;
    newNode->next = L;  // link the new node to the first node of list L
    L = newNode;        // update L to point to the new node
}

bool is_member(const List& L, int n) {
    Node* p = L;

    while ((p != nullptr) &&
        (p->value != n)) {  // do not swap the tests, to avoid dereferencing a null pointer
        p = p->next;
    }

    return (p != nullptr);
}

// overloaded operator<<
// Write the values stored in list L to stream out
std::ostream& operator<<(std::ostream& out, const List& L) {
    if (is_empty(L)) {
        std::cout << "List is empty!!";
    }
    else {
        for (Node* p = L; p; p = p->next) {
            out << p->value << "->";
        }
    }

    return out;
}

/*
 * Exercise 3
 */


 // Remove the node storing n from list L
 // If n is not in the list L then L is not modified
void remove(List& L, int n) {
    if (is_empty(L)) {
        return;
    }
    if (L->value == n) {
        Node* p1 = L;
        L = L->next;
        delete p1;
    }
    else {
        Node* p1 = L;
        while ((p1->next != nullptr) && (p1->next->value != n)) {
            p1 = p1->next;
        }
        if (!p1->next) {
            return;
        }
        Node* p2 = p1->next;
        p1->next = p2->next;
        delete p2;
    }
}

// Insert n in the end of the list
void insert_last(List& L, int n) {
    Node* p1 = L;
    while (p1->next != nullptr) {
        p1 = p1->next;
    }
    Node* newNode = new Node;
    newNode->next = nullptr;
    newNode->value = n;
    p1->next = newNode;


}

// Insert n in a sorted list L
// After insertion L should remain sorted
void insert_sorted(List& L, int n) {
    if (L->value > n || is_empty(L)) {
        Node* newNode = new Node;
        newNode->value = n;
        newNode->next = L;
        L = newNode;
    }
    else {
        Node* p1 = L;
        while ((p1->next != nullptr) && !(p1->next->value > n && p1->value < n)) {
            p1 = p1->next;
        }
        Node* newNode = new Node;
        newNode->value = n;
        newNode->next = p1->next;
        p1->next = newNode;
    }
}

/**************************
 * Auxiliary functions     *
 ***************************/

