#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Noise {
    public:
        Noise(string inputNoise, int inputVolume) {
            sound = inputNoise;
            volume = inputVolume;
        }
    
        string getSound() { return sound; }
        int getVolume() { return volume; }
        
        friend bool operator < ( const Noise& left, const Noise& right );
        friend ostream& operator <<( ostream& outs, const Noise & n );
        
    private:
        int volume;
        string sound;
};

bool operator < ( const Noise& left, const Noise& right ) {
    return left.volume < right.volume;
}

ostream& operator <<( ostream& outs, const Noise& n ) {
    outs << "sound: " << n.sound << " volume: " << n.volume << "dB" << endl;
    return( outs );
}


class Dog {
    public:
        // Constructor
        Dog(string inputName) : bark("Woof", 60) {
            name = inputName;
        }
        
        // Setters & Getters
        string  getName() { return name; }
        void    setName( string newName) { name = newName; }
        void  getNoise() { std::cout << bark.getSound() << std::endl; }
        void  getVolume() { std::cout << bark.getVolume() << std::endl; }
        
    private:
        string name;
        Noise bark;
};


int main() {
    Dog fido = Dog("Fido");
    fido.getNoise();
    fido.getVolume();
    
    Noise a = Noise("test", 10);
    Noise b = Noise("test", 12);
    if (a < b) {
        cout << "a < b !" << endl;
    }
    cout << a << endl;
}