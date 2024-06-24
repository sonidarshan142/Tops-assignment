/*Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference*/

#include <iostream>

class Circle 
{
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() 
{
    Circle myCircle(5);
    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;

    std::cout << "Circumference of the circle: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}


