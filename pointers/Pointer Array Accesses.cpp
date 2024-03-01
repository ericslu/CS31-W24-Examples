#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Array Pointers (this is not a term people use)
    char test[] = "hello";
    cout << *test << endl;
    
    char* temp = test;
    cout << *temp << endl;
    
    // Iterating through arrays with pointers
    test += 1;
    
    char* temp2 = test + 1;
    cout << *temp2 << endl;
    
    temp += 1;
    cout << *temp << endl;
    
    // Add the parenthesis I beg 🙏🙏🙏
    cout << *(test + 1) << endl;
}
