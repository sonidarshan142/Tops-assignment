/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/

#include <iostream>
using namespace std;

class Addition 
{
public:
    Addition(double a, double b) {
        result = a + b;
    }
    void display() {
        cout << "Addition Result: " << result << endl;
    }
private:
    double result;
};

class Subtraction {
public:
    Subtraction(double a, double b) {
        result = a - b;
    }
    void display() {
        cout << "Subtraction Result: " << result << endl;
    }
private:
    double result;
};

class Multiplication {
public:
    Multiplication(double a, double b) {
        result = a * b;
    }
    void display() {
        cout << "Multiplication Result: " << result << endl;
    }
private:
    double result;
};

class Division {
public:
    Division(double a, double b) {
        if(b != 0)
            result = a / b;
        else {
            cout << "Error: Division by zero." << endl;
            result = 0;
        }
    }
    void display() {
        cout << "Division Result: " << result << endl;
    }
private:
    double result;
};

int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Addition add(num1, num2);
    add.display();

    Subtraction sub(num1, num2);
    sub.display();

    Multiplication mul(num1, num2);
    mul.display();

    Division div(num1, num2);
    div.display();

    return 0;
}

