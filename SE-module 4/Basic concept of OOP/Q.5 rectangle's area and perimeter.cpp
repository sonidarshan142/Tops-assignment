/*Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perameter*/

#include <iostream>
using namespace std;
class Rectangle 
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double getArea() {
        return length * width;
    }

    double getParameter() {
        return 2 * (length + width);
    }

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }
};

int main() {

    Rectangle rect(5.0, 3.0);
    cout << "Area: " << rect.getArea() <<endl;
    cout << "Parameter: " << rect.getParameter()<<endl;

    rect.setLength(10.0);
    rect.setWidth(4.0);

    cout << "New Area: " << rect.getArea() <<endl;
    cout << "New Parameter: " << rect.getParameter()<<endl;

    return 0;
}

