#include <iostream>
using namespace std;

// Code written by Brenna
// Dangling pointer example

int main()
{
    int * ptr;
    ptr = new int(10);
    cout<<*ptr<<endl;
    delete ptr;
    
    //cout<<*ptr<<endl; //UNDEFINED BEHAVIOR
    //Solution?
    ptr = nullptr;
    cout<<*ptr<<endl;
}
