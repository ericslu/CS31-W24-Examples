#include <stdio.h>
#include "bankAccount.cpp"
#include <string>
#include <assert.h>
int main()
{
    bankAccount me( "Howard", 100.00 );
    bankAccount another( "Howard", 50.00 );
    bankAccount you( "You", 100.00 );
    
    bankAccount combined = me + another;
    if (me == you)
    {
       assert( false );
    }
    if (me == me)
    {
        assert( true );
    }
    
    bankAccount less = me - another;
    assert( less.getName() == "Howard" );
    assert( less.getBalance() == 50.00 );
    
    cin >> combined;
    cout << combined;
    return 0;
}