// COMSC-210 | Lab 7 | Dainiz Almazan
// IDE used: CLion
// TODO: pointer notation rather than array notation
#include <string>
using namespace std;

const int ARRAY_SIZE = 5;

// reverseArray() receives a dynamic string array, reverses the elements, and returns a pointer to the modified array.
// arguments: a dynamic array of type string, an int for the array size
// returns: a pointer to the reversed array
string reverseArray(string*, int);
// displayArray() receives a dynamic string array, and outputs its elements.
// arguments: a dynamic array of type string, an int for the array size
// returns: nothing
void displayArray(string*, int);

int main(){
    string *arrptr = nullptr;
    arrptr = new string[ARRAY_SIZE];
    *(arrptr) = "Jasmine";
    *(arrptr + 1) = "Veronica";
    *(arrptr + 2) = "Iris";
    *(arrptr + 3) = "Daisy";
    *(arrptr + 4) = "Lily";

// Call the two functions appropriately to reverse and output the array.
  return 0;
}

string reverseArray(string* arrptr, const int size){
	// use for temporarily holding value when swapping
	string temp;

	// using two variables to iterate from front and end of array simultaneously
	for (int left = 0, right = size - 1; left <= right; left++, right--) {
		temp = *(arrptr + left);
		*(arrptr + left) = *(arrptr + right);
		*(arrptr + right) = temp;
	}
}

void displayArray(string* arrptr, const int size) {

}