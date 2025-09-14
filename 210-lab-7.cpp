// COMSC-210 | Lab 7 | Dainiz Almazan
// IDE used: CLion

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

// reverseArray() receives a dynamic string array, reverses the elements, and returns a pointer to the modified array.
// arguments: a dynamic array of type string, an int array size
// returns: a pointer to the reversed array
string *reverseArray(string *, int);

// displayArray() receives a dynamic string array, and outputs its elements.
// arguments: a dynamic array of type string, an int array size
// returns: nothing
void displayArray(string *, int);

int main() {
	// Declaring a pointer of the same type as the array
	string *arrptr = nullptr;
	// Using new operator to create a dynamic array of the desired size
	arrptr = new string[ARRAY_SIZE];
	// Using pointer notation to populate the array with names
	*(arrptr) = "Jasmine";
	*(arrptr + 1) = "Veronica";
	*(arrptr + 2) = "Iris";
	*(arrptr + 3) = "Daisy";
	*(arrptr + 4) = "Lily";

	cout << "Original array: ";
	displayArray(arrptr, ARRAY_SIZE);

	arrptr = reverseArray(arrptr, ARRAY_SIZE);
	cout << "\nReversed array: ";
	displayArray(arrptr, ARRAY_SIZE);

	// Using delete operator to delete the dynamic array
	delete [] arrptr;

	return 0;
}

string *reverseArray(string *arrptr, const int size) {
	// Declaring variable for temporarily holding value when swapping
	string temp;

	// Using two variables to iterate from front (left) and end (right) of array simultaneously
	// When left and right have equal values, or if left is greater than right,
	// all names have been swapped
	for (int left = 0, right = size - 1; left <= right; left++, right--) {
		// Holding the value on the left side of the array in temp
		temp = *(arrptr + left);
		// Setting the left side value to the right side value
		*(arrptr + left) = *(arrptr + right);
		// Setting the right value to temp, which was originally the left value
		*(arrptr + right) = temp;
	}

	return arrptr;
}

void displayArray(string *arrptr, const int size) {
	for (int i = 0; i < size; i++)
		cout << *(arrptr + i) << " ";
}