/*Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include <iostream>
using namespace std;

class Triangle 
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    bool isEquilateral() const {
        return (side1 == side2) && (side2 == side3);
    }

    bool isIsosceles() const {
        return (side1 == side2) || (side2 == side3) || (side1 == side3);
    }
    bool isScalene() const {
        return (side1 != side2) && (side2 != side3) && (side1 != side3);
    }
};

int main() {
    double s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle tri(s1, s2, s3);
    if (tri.isEquilateral()) {
        cout << "The triangle is equilateral." << endl;
    } else if (tri.isIsosceles()) {
        cout << "The triangle is isosceles." << endl;
    } else if (tri.isScalene()) {
        cout << "The triangle is scalene." << endl;
    } else {
        cout << "The triangle type could not be determined." << endl;
    }

    return 0;
}

