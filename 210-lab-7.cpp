// COMSC-210 | Lab 7 | Dainiz Almazan
// IDE used: CLion
// TODO: pointer notation rather than array notation
#include <string>
using namespace std;

const int ARRAY_SIZE = 5;

// reverseArray() receives a dynamic string array, reverses the elements, and returns a pointer to the modified array.
// arguments: a dynamic array of type string
// returns: a pointer to the reversed array
string reverseArray(string*);
// displayArray() receives a dynamic string array, and outputs its elements.
// arguments: a dynamic array of type string
// returns: nothing
void displayArray(string*);

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

string reverseArray(string*){

}
void displayArray(string*) {

}