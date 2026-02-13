// COMSC-210 | Lab 7 | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

string* reverseArray(string[]);
void displayArray(string[], string[]);

const int ARRAY_SIZE = 5, ARRAY_OFFSET = 1;

/**
 * @brief Main function, Creates a dynamic array of strings, reverses it, and
 *        displays the reversed array
*/
int main() {
    // Create a dynamic array of strings and assign 5 names to it
    string *namesPtr = nullptr;
    namesPtr = new string[ARRAY_SIZE]{"Janet", "Jeffe", "Jin", "Joe", "Junio"};

    // Create a new dynamic array in the reverse of the original array and display it
    string *newNamesPtr = reverseArray(namesPtr);
    displayArray(newNamesPtr, namesPtr);

    return 0;
}

/**
 * @brief Creates a new array of strings that is the reverse of the passed array
 * @param nameArray The array of strings to reverse
 * @return A pointer to the new array of strings
*/
string* reverseArray(string nameArray[]){
    // Create a new dynamic array to assign reversed elements to
    string *arrayPtr = new string[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++){
        // Reverse array by assigning the elements from original array in reverse order
        *(arrayPtr + i) = *(nameArray + (ARRAY_SIZE - i) - ARRAY_OFFSET);
    }
    return arrayPtr;
}

/**
 * @brief Displays the elements of a string array
 * @param nameArray The array of strings to display
*/
void displayArray(string reversedArray[], string nameArray[]){
    cout << "Original Array: ";
    for (int i = 0; i < ARRAY_SIZE; i++){
        // Loop through array and print out each element
        cout << *(nameArray + i) << " ";
    }
    cout << endl;
    
    cout << "Reversed Array: ";
    for (int i = 0; i < ARRAY_SIZE; i++){
        // Loop through array and print out each element
        cout << *(reversedArray + i) << " ";
    }
    cout << endl;
}