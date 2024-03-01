#include <iostream>
#include <cstring>
using namespace std;

// Note: There is a bug in the originally provided code, it is fixed here
void printChars(const char* str) {
    int i = 0;
    
    while (*(str + i) != '\0') {
        cout << *(str + i) << endl;
        i += 1; // This is the bug fix
    }
}

int main() {
    //printChars();
    /*
    There are 3 Error Cases:
    - Case A: Uninitialized Pointer
    - Case B: C-String with no Exit Char ('\0')
    - Case C: Null Pointer
    */
    
    // Case A: Uninitialized Pointer
    // Uninitialized pointers store garbage (essentially random) addresses, thus accessing an uninitialized pointer will attempt to access an address that does not exist, causing a Segmentation Fault
    char* caseA;
    printChars(caseA);
    
    // Case B: C-String with no Exit Char ('\0')
    // Note: Case B is exhibited in separate file which runs in C. C++ has few checks to avoid crashes in this case
    // Because C-Strings terminate at an exit character ('\0'), if we create a C-String without an exit character, the compiler will keep reading past the end of the C-String, reading in garbage values.
    
    
    // Case C: nullptr / null
    // Similarly to case A, we are attempting to access an address which does not exist: thus, Segmentation Fault
    char* caseC = nullptr;
    printChars(caseC);
}
