// Note: The solutions for this worksheet may have typos, this is a valid solution to WS 8 #2.

#include <string>
#include <iostream>
using namespace std;

class Person {
    public:
        // Empty Constructor (initialize object without parameters)
        Person() {
            m_age = 0;
            m_nickname = "";
        }
        Person(int age, string nickname) {
            m_age = age;
            m_nickname = nickname;
        }
        // const **WHEN DECLARED AFTER FUNCTION DEFINITION** will throw a compiler error if any member variables are changed.
        /*
        Ex:
        int getAge() const {}       ->  getAge() function cannot change any member variables
        const int getAge() {}       ->  output of getAge() is const variable (makes sense for pointers and references)
        */
        
        // Note: const is not required for functions but can be helpful for debugging
        int getAge() const {
            return m_age;
        }
        void haveBirthday() {
            m_age++;
        }
        // Note: We can access private members *WITHIN* the class
        void speak() const {
            cout << m_nickname << endl;
        }
    // Technically, we dont need to declare private, as this is a class but its easier to read "private:"
    private:
        int m_age;
        string m_nickname;
};

int main() {
    // Empty Constructor Initialization
    Person no_params_test = Person();
    // Testing
    cout << no_params_test.getAge() << endl;
    no_params_test.haveBirthday();
    cout << no_params_test.getAge() << endl;
    no_params_test.speak();
    
    
    // Regular Constructor Initialization
    Person normal_params_test = Person(31, "Howard Stahl");
    // Testing
    cout << normal_params_test.getAge() << endl;
    normal_params_test.haveBirthday();
    cout << normal_params_test.getAge() << endl;
    normal_params_test.speak();
}
