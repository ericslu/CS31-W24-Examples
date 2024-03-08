#include <string>
using namespace std;
class Address {
    public: // class member functions
    //--constructor
        Address( string streetNumber, string street, string city, string state, string zip ) 
        : mStreetNumber( streetNumber ), 
        mStreet( street ), 
        mCity( city ), 
        mState( state ), 
        mZip( zip )
        {}
        
    //--accessors
    string getStreetNumber() const { return (mStreetNumber); } 
        string getStreet() const { return( mStreet ); }
        string getCity() const { return( mCity ); }
        string getState() const { return( mState ); }
        string getZip() const { return( mZip ); }
        
    private:
        string mStreetNumber; 
        string mStreet; 
        string mCity;
        string mState; 
        string mZip;
};