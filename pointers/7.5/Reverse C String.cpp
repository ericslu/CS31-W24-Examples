#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *arr)
{
    // Store first char
    char *start = arr;
    
    // Store last char (the last char that isn't '\0')
    char *end = arr;
    while (*end != '\0') {
        end++;
    }
    end--;  // Account for '\0'
    
    // While there are still characters to switch
    while (end > start)
    {
        // Store the current "begin" char
        int temp = *start;
        // Store the current "end" in the current "begin"
        start = *end;
        end = temp;
        end--;
        start++;
    }
}

int main() {
    char test[] = "abcd";
    cout << test << endl;
    reverse(test);
    cout << test << endl;
    
    char test2[] = "abcde";
    cout << test2 << endl;
    reverse(test2);
    cout << test2 << endl;
}