/*Write a program to find the multiplication values and the cubic values using 
inline function*/
#include <iostream>
using namespace std;
inline int multiply(int a, int b) 
{
    return a * b;
}

inline int cube(int x) 
{
    return x * x * x;
}

int main() 
{
    int num1, num2, num3;
    cout << "Enter two numbers to multiply:";
    cin >> num1 >> num2;

    cout << "Enter a number to find its cubic value:";
    cin >> num3;

    int product = multiply(num1, num2);
    int cubicValue = cube(num3);

    cout << "The product of " << num1 << " and " << num2 << " is: " << product <<endl;
    cout << "The cubic value of " << num3 << " is: " << cubicValue <<endl;

    return 0;
}

