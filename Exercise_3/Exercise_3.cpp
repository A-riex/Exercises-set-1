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
#include <vector>

/****************************************
 * Function declarations                *
 ****************************************/

 // Re-set the stream in to good state
void clean_up_stream(std::istream& in);

// Read a sequence of integers and store them in a vector
// Return a vector with the sequence read
std::vector<int> read_seq();

// Merge S1 with S2
// Return a vector with the merged sequence, without repetitions
// Vectors S1 and S2 are sorted
std::vector<int> merge_seq(const std::vector<int>& S1, const std::vector<int>& S2);

// Display the values stored in vector V
void display_seq(const std::vector<int>& S);

/**************************
 * MAIN                   *
 **************************/

int main() {
    std::cout << "Enter sequence 1: ";
    std::vector<int> seq1 = read_seq();

    clean_up_stream(std::cin);

    std::cout << "\nEnter sequence 2: ";
    std::vector<int> seq2 = read_seq();

    std::vector<int> seq3 = merge_seq(seq1, seq2);

    std::cout << "\nMerged sequence: ";
    display_seq(seq3);
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

// Read a sequence of integers and store them in a vector
// Return a vector with the sequence read
std::vector<int> read_seq() {
    std::vector<int> S;

    int value;
    while (std::cin >> value) {
        S.push_back(value);
    }

    return S;
}

// Merge S1 with S2
// Return a vector with the merged sequence, without repetitions
// Vectors S1 and S2 are sorted
std::vector<int> merge_seq(const std::vector<int>& S1, const std::vector<int>& S2) {
    std::vector<int> S3;  // to store the merged sequence

    std::size_t c1 = 0;
    std::size_t c2 = 0;

    while (c1 < S1.size() && c2 < S2.size()) {
        if (S1[c1] < S2[c2]) {
            S3.push_back(S1[c1]);
            ++c1;
        }
        else if (S1[c1] > S2[c2]) {
            S3.push_back(S2[c2]);
            ++c2;
        }
        else {
            S3.push_back(S1[c1]);
            ++c1;
            ++c2;
        }
    }

    while (c1 < S1.size()) {
        S3.push_back(S1[c1]);
        ++c1;
    }

    while (c2 < S2.size()) {
        S3.push_back(S2[c2]);
        ++c2;
    }



    // First attempt
    //S3 = S1;
    //for (int i : S3) {
    //    int u = 0;
    //    if (i != S2[u]) {
    //        S3.push_back(S2[u]);
    //    }
    //    u++;
    //}

    //for (int& e1 : S3) {
    //    for (int& e2 : S3) {
    //        if (e2 > e1) {
    //            // swap
    //            int temp = e1;
    //            e1 = e2;
    //            e2 = temp;
    //        }
    //    }
    //}

    return S3;
}

// Display the values stored in vector V
void display_seq(const std::vector<int>& S) {
    for (int v : S) {
        std::cout << v << " ";
    }

    std::cout << '\n';
}
