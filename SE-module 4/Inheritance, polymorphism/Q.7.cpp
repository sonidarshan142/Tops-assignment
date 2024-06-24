/*Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance*/
#include <iostream>
using namespace std;
class Base {
public:
    Base() {
        cout << "Base class constructor called." <<endl;
    }
};

class Intermediate : public Base {
public:
    Intermediate() {
        	cout << "Intermediate class constructor called." <<endl;
    }
};

class Derived : public Intermediate {
public:
    Derived() {
        cout << "Derived class constructor called." <<endl;
    }
};

int main() {
    cout << "Creating an object of Derived class..." <<endl;
    Derived derivedObject;
    return 0;
}

