#include <limits>
#include <iostream>

using namespace std;

int main(){
	cout << "Bytes \t Min \t Max" 
		<< endl << numeric_limits<short>::lowest() 
		<< numeric_limits<short>::max();
}