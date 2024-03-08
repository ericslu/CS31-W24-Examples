#include <string>
#include <iostream>
#include "Address.cpp"
using namespace std;

class bankAccount {
    public: // class member functions
        //--constructors
        
        bankAccount() {
            my_name = "?name?";
            my_balance = 0.0;
        }
        
        
        bankAccount(string initName, double initBalance){
            my_name=initName;
            my_balance=initBalance;
        }
        
        
        // post: A bankAccount with two arguments when called like this: // bankAccount anAcct("Hall", 100.00);
        
        //--modifiers
        void deposit(double depositAmount) {
            my_balance = my_balance + depositAmount;
        }
        
        void withdraw(double withdrawalAmount) {
            my_balance = my_balance - withdrawalAmount;
        }
        
        
        //--accessors
        double getBalance() const {
            return my_balance;
        }
       
        string getName() const {
            return my_name;
        }
     
        void setName( string initName ) {
            my_name = initName;
        // post updates the member variable my_name
        };
        
        friend bankAccount operator + ( const bankAccount & left, const bankAccount & right )
        {
            bankAccount temp;
            if (left.my_name == right.my_name) {
                // only combine together accounts with the same name...
                temp = bankAccount ( left.my_name, left.my_balance + right.my_balance );
            }
            // if the names don’t match, it might be better to throw an exception...
            return( temp );
        }
        
        friend bankAccount operator - ( const bankAccount & left, const bankAccount & right )
        {
            bankAccount temp;
            if (left.my_name == right.my_name) {
                // only combine together accounts with the same name...
                temp = bankAccount ( left.my_name, left.my_balance - right.my_balance );
            }
            // if the names don’t match, it might be better to throw an exception...
            return( temp );
        }
        
        friend bool operator == ( const bankAccount & left, const bankAccount & right )
        {
            return( left.my_name == right.my_name && left.my_balance == right.my_balance );
        }
        
        friend std::ostream& operator <<( std::ostream& outs, const bankAccount & b )
        {
            // IMPLEMENTATION
            // prints a bankAccount by showing its name and its balance
            outs << "name = " << b.my_name << " balance = $ " << b.my_balance << endl;
            return( outs );
        }
        
        friend std::istream& operator >>( std::istream& ins, bankAccount & b )
        {
            // IMPLEMENTATION
            // builds a new bankAcount by reading a string name and a double
            double d = 0;
            string s;
            ins >> s;
            ins >> d;
            b.setName( s );
            b.deposit( d );
            return( ins );
        }


    private:
        string my_name; // Uniquely identify an object 
        double my_balance; // Store the current balance
};


