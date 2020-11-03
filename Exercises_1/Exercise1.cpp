/**************************************************
 * TNG033: Lesson 1                                *
 * Exercise 1                                      *
 * *************************************************/

#include <limits>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// Uppgift a)

	// Translate from first and last character to lowest and max int
	int c_low = numeric_limits<char>::lowest();
	int c_max = numeric_limits<char>::max();

	// Output char sizes
	cout << "type \t \t Min \t \t \t Max \t \t \t Bytes" << endl << endl
		<< "char \t \t"
		<< c_low << setw(25)
		<< c_max << setw(25)
		<< sizeof(char) << endl

		// Output short sizes
		<< "short \t \t"
		<< numeric_limits<short>::lowest() << setw(25)
		<< numeric_limits<short>::max() << setw(25)
		<< sizeof(short) << endl

		// Output int sizes
		<< "int \t \t"
		<< numeric_limits<int>::lowest() << setw(25)
		<< numeric_limits<int>::max() << setw(25)
		<< sizeof(int) << endl

		// Output long sizes
		<< "long \t \t"
		<< numeric_limits<long>::lowest() << setw(25)
		<< numeric_limits<long>::max() << setw(25)
		<< sizeof(long) << endl

		// Output long long sizes
		<< "long long \t \t"
		<< numeric_limits<long long>::lowest() << setw(25)
		<< numeric_limits<long long>::max() << setw(25)
		<< sizeof(long long) << endl

		// Output unsigned int sizes
		<< "unsigned int \t \t"
		<< numeric_limits<unsigned int>::lowest() << setw(25)
		<< numeric_limits<unsigned int>::max() << setw(25)
		<< sizeof(unsigned int) << endl << endl << endl;

	// Uppgift b)

	// Output float sizes
	cout << "type \t \t Min \t \t \t Max \t \t \t Bytes" << endl << endl
		<< "float \t \t"
		<< numeric_limits<float>::lowest() << setw(25)
		<< numeric_limits<float>::max() << setw(25)
		<< sizeof(float) << endl

		// Output double sizes
		<< "double \t \t"
		<< numeric_limits<double>::lowest() << setw(25)
		<< numeric_limits<double>::max() << setw(25)
		<< sizeof(double) << endl

		// Output long double sizes
		<< "long double \t \t"
		<< numeric_limits<long double>::lowest() << setw(25)
		<< numeric_limits<long double>::max() << setw(25)
		<< sizeof(long double) << endl << endl;

	// Uppgift c)
	// Kan ej ha negativt värde, "hoppar varvet runt" till unsigned int max -8.
	unsigned int u_int = -8;
	cout << "unsigned int = " << u_int << endl
		<< "cannot be assigned negative values, assignes max value -8"
		<< endl << endl;

	// Uppgift d)
	unsigned int u = 0;
	int i = -8;
	if (i < u)
		cout << "smaller" << endl;
	else
		cout << "larger" << endl;

	cout << "Warning: comparison of integers of different signs : 'int' and 'unsigned int'"
		<< endl;

	// Results in Larger. Compiler gives warning:
	// comparison of integers of different signs : 'int' and 'unsigned int'
}