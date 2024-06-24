//Write a program of to swap the two values using template
#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 10, int2 = 20;
    
	cout << "Before swap:" <<endl;
    cout << "int1 = " << int1 << ", int2 = " << int2 <<endl;

    swapValues(int1, int2);
    
    cout << "After swap:" <<endl;
    cout << "int1 = " << int1 << ", int2 = " << int2 <<endl;

    return 0;
}

