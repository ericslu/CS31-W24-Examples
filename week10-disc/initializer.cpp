// Implement the << and < operators in the following code such that the provided main function runs.
// You are only allowed to modify code in the Dog class.

// For the < operator, base comparisons ONLY on volume
// For the << operator, output in the following format, where <> denotes member variables: 
// sound: <sound> volume: <volume>dB
// Ex: sound = "Bark", volume = 60  -> Output: sound: Bark volume: 60dB

#include <string>
#include <iostream>
using namespace std;

// YOU ARE NOT ALLOWED TO MODIFY ANY CODE IN THE NOISE CLASS
class Noise {
    public:
        Noise(string inputNoise, int inputVolume) {
            sound = inputNoise;
            volume = inputVolume;
        }
    
        string getSound() { return sound; }
        int getVolume() { return volume; }
        
    private:
        int volume;
        string sound;
};


class Dog {
    public:
        // Constructor (You are allowed to modify the constructor)
        Dog(string inputName) {
            name = inputName;
        }
        
        // Setters & Getters (You are NOT allowed to modify the constructor)
        string  getName() { return name; }
        void    setName( string newName) { name = newName; }
        void  getNoise() { std::cout << bark.getSound() << std::endl; }
        void  getVolume() { std::cout << bark.getVolume() << std::endl; }
        
        // Operators, (ADD CODE HERE)
        
    private:
        string name;
        Noise bark;
};


int main() {
    Dog fido = Dog("Fido");
    fido.getNoise();
    fido.getVolume();
    
    // Noise a = Noise("test", 10);
    // Noise b = Noise("test", 12);
    // if (a < b) {
    //     cout << "a < b !" << endl;
    // }
    // cout << a << endl;
}