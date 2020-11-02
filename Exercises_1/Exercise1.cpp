#include <limits>
#include <iostream>
#include <iomanip>

using namespace std;


int main(){


	cout<< "Min \t \t \t Max \t \t \t Bytes" << endl
		<< numeric_limits<char>::lowest() << "\t"
		<< numeric_limits<char>::max() << "\t"
		<< sizeof(char) << endl

		<< numeric_limits<short>::lowest() << "\t"
		<< numeric_limits<short>::max() << "\t"
		<< sizeof(short) << endl

		<< numeric_limits<int>::lowest() << "\t"
		<< numeric_limits<int>::max() << "\t"
		<< sizeof(int) << endl

		<< numeric_limits<long>::lowest() << "\t"
		<< numeric_limits<long>::max() << "\t"
		<< sizeof(long) << endl

		<< numeric_limits<long long>::lowest() << "\t"
		<< numeric_limits<long long>::max() << "\t"
		<< sizeof(long long) << endl

		<< numeric_limits<unsigned int>::lowest() << "\t"
		<< numeric_limits<unsigned int>::max() << "\t"
		<< sizeof(unsigned int) << endl;

}