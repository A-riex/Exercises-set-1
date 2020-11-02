#include <limits>
#include <iostream>

using namespace std;

int main(){
	cout << "Min \t Max \t Bytes" << endl
		<< numeric_limits<short>::lowest() << "\t"
		<< numeric_limits<short>::max() << "\t"
		<< sizeof(short);

}