/*Write a C++ Program to show access to Private Public and Protected using 
Inheritance*/

#include <iostream>
using namespace std;

class Base 
{
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Base() : privateVar(1), protectedVar(2), publicVar(3) {}
};

class Derived : public Base 
{
public:
    void display() {
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() 
{
    Derived obj;
    obj.display();
    cout << "Accessing Public Variable from main: " << obj.publicVar << endl;
    return 0;
}

