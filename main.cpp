#include <iostream>
using namespace std;

class Animal {
    public:
        void speak() {
            cout << "Speaking" << endl;
        }
};

class Dog: public Animal {
    public:
        void speak() {
            cout << "Barking" << endl;
        }
};


int main() {

    Animal a;
    Dog d;
    d.speak();
    a.speak();

    return 0;
}