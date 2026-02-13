// COMSC-210 | Lab 7 | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

string* reverseArray(string[]);
void displayArray(string[]);

const int ARRAY_SIZE = 5;

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    string *namesPtr = nullptr;
    namesPtr = new string[ARRAY_SIZE]{"Janet", "Jeffe", "Jin", "Joe", "Junio"};

    string *newNamesPtr = reverseArray(namesPtr);
    displayArray(newNamesPtr);

    return 0;
}

string* reverseArray(string nameArray[]){
    string *arrayPtr = new string[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++){
        *(arrayPtr + i) = *(nameArray + (ARRAY_SIZE - i) - 1);
    }
    return arrayPtr;
}

void displayArray(string nameArray[]){
    cout << "Outputting array elements: ";
    // Loop through array and print out each element
    for (int i = 0; i < ARRAY_SIZE; i++){
        cout << *(nameArray + i) << " ";
    }
    cout << endl;
}