/*****************************************************************************
 * TNG033: set 1, exercise 4                                                  *
 * See lecture 3                                                              *
 * Header file defining a List of nodes                                       *
 * each node stores an int and a pointer to the next node                     *
 * Pointers and dynamic memory allocation are used!!                          *
 * Note: the lists implementation used here does not use a dummy node         *
 * ****************************************************************************/

#pragma once

#include <iostream>

struct Node {
    int value = 0;
    Node* next = nullptr;
};

using List = Node*;  // A List is represented as a pointer to the first node in the list
                     // List is a type alias (i.e. a synonym) for Node*

/*
 * NOTE: no dummy nodes are used in this implementation of lists
 */

 // Test if list L is empty
bool is_empty(const List& L);

// Delete every node of list L
void make_empty(List& L);

// Insert n in the beginning of the list L
void insert_first(List& L, int n);

// Insert n in the end of the list
void insert_last(List& L, int n);  // Exerc 4

// Insert n in a sorted list L
// After insertion, L should remain sorted
void insert_sorted(List& L, int n);  // Exerc 4

// Remove the node storing n from list L
// If n is not in the list L then L is not modified
void remove(List& L, int n);  // Exerc 4

// Search for a value n in the list
// Return true if n is found in the list
// otherwise, return false
bool is_member(const List& L, int n);

// overloaded operator<<
// Write the values stored in list L to stream out
std::ostream& operator<<(std::ostream& out, const List& L);

