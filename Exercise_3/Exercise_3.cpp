/********************************************************
 * TNG03: set 1                                          *
 * Exercise 3: merge two sorted sequences                *
 * The merge algorithm used here can be useful for       *
 * implementing operator+ of class Set, Lab 1            *
 * ******************************************************/

 // Test data:
 // seq 1: 1 3 5 7 9 stop
 // seq2: 2 5 6 7 9 12 15 20 stop

#include <iostream>
#include <iomanip>
#include <string>

// using namespace std;

/****************************************
 * Function declarations                *
 ****************************************/

 // Re-set the stream in to good state
void clean_up_stream(std::istream& in);

// Read a sequence of integers and store them in array V
// array V can store at most n values
// Return number of ints read and stored in V
int read_seq(int V[], int n);

// Merge sequence S1 with S2 and store the result in S3
// Return number of values stored in S3
// Assume array S3 has enough slots to store the merged sequence
int merge_seq(const int S1[], int n1, const int S2[], int n2, int S3[]);

// Display the values stored in array V
// Array V stores n values
void display_seq(const int V[], int n);

/**************************
 * MAIN                   *
 **************************/

int main() {
    constexpr int kSize = 100;

    int seq1[kSize] = { 0 };

    std::cout << "Enter sequence 1: ";
    auto howMany1 = read_seq(seq1, kSize);

    int seq2[kSize] = { 0 };

    std::cout << "Enter sequence 2: ";
    auto howMany2 = read_seq(seq2, kSize);

    int seq3[2 * kSize] = { 0 };

    auto howMany3 = merge_seq(seq1, howMany1, seq2, howMany2, seq3);

    std::cout << "\nMerged sequence: ";
    display_seq(seq3, howMany3);

    return 0;
}

/*************************************
 * Function definitions               *
 **************************************/

 // Re-set the stream in to good state
void clean_up_stream(std::istream& in) {
    in.clear();  // Reset the stream error flags, i.e. put stream in back to good state

    // Extract the non-valid input from the stream’s buffer
    auto trash = std::string{};
    std::getline(in, trash);
}

// Read a sequence of integers from cin and store them in array V
// array V can store at most n values
// Return number of ints read and stored in V
int read_seq(int V[], int n) {
    auto counter = int{ 0 };

    while (counter < n &&           // stop reading if all slots of array V are occupied
        std::cin >> V[counter])  // stop reading when a non-numeric value is entered
    {
        ++counter;
    }

    // Put the stream back to good state
    clean_up_stream(std::cin);

    return counter;
}

// Arrays S1 and S1 are sorted
// Merge S1 with S2 and store the result in S3
// Return number of values stored in S3
int merge_seq(const int S1[], int n1, const int S2[], int n2, int S3[]) {

    //ADD CODE

    return 0; //delete this
}

// Display the values stored in array V
// Array V stores n values
void display_seq(const int V[], int n) {
    for (auto i = 0; i < n; i++) {
        std::cout << V[i] << " ";
    }

    std::cout << '\n';
}
