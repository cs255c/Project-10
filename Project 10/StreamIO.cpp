/* Stream I/O exercises from the textbook. Outputs numbers in required formats,
 * and takes input in a couple of ways.
 * 4/17/2015
 * Alex Debrecht */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	// a
	// Prints 4444 left justified in 13 digit field
	cout << left << "4444 in 13 digit field filled with /: " << endl;
	cout.width(13);
	cout.fill('/');
	cout << 4444 << endl << endl;

	// b
	// Reads 15 character string into array 'state'
	cout << "Enter 15 characters." << endl;
	char state[10];
	cin >> state;
	for (int i = 0; i < 10; ++i) {
		cout << state[i];
	}
	cout << endl;

	// c
	// Prints 200 and +200 on same line from variable num
	int num = 200;
	cout << "200 without and with positive sign: " << endl;
	cout << num << " " << showpos << num << endl << endl;

	// d
	// Prints 255 in hexadecimal
	cout << "255 in hexadecimal: " << endl;
	cout << showbase << hex << 255 << endl << endl;

	// e
	// Reads characters until p is encountered, and ignores p
	cout << "Read until . is encountered (up to 10 characters): " << endl;
	char charArray[11];
	cin.get(charArray,11,'.');
	cin.ignore();
	cout << endl << endl;

	// f
	// Prints 00001.234
	cout << "Print 000001.24 (1.235 to two decimal places in a 9-digit field "
			"filled with 0s): " << endl;
	cout.width(9);
	cout.fill('0');
	cout << noshowpos << right << setprecision(3) << 1.235 << endl;

}
