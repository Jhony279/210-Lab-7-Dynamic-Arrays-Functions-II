// COMSC-210 | Lab 7 | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

string* reverseArray(string[]);
void displayArray(string[]);

const int ARRAY_SIZE = 5, ARRAY_OFFSET = 1;

/**
 * @brief Main function, Creates a dynamic array of strings, reverses it, and
 *        displays the reversed array
*/
int main() {
    string *namesPtr = nullptr;
    namesPtr = new string[ARRAY_SIZE]{"Janet", "Jeffe", "Jin", "Joe", "Junio"};

    string *newNamesPtr = reverseArray(namesPtr);
    displayArray(newNamesPtr);

    return 0;
}

/**
 * @brief Creates a new array of strings that is the reverse of the passed array
 * @param nameArray The array of strings to reverse
 * @return A pointer to the new array of strings
*/
string* reverseArray(string nameArray[]){
    string *arrayPtr = new string[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++){
        *(arrayPtr + i) = *(nameArray + (ARRAY_SIZE - i) - ARRAY_OFFSET);
    }
    return arrayPtr;
}

/**
 * @brief Displays the elements of a string array
 * @param nameArray The array of strings to display
*/
void displayArray(string nameArray[]){
    cout << "Outputting array elements: ";
    // Loop through array and print out each element
    for (int i = 0; i < ARRAY_SIZE; i++){
        cout << *(nameArray + i) << " ";
    }
    cout << endl;
}