/*Write a C++ Program to find Area of Rectangle using inheritance*/

#include <iostream>
using namespace std;

class Shape {
protected:
    float width;
    float height;

public:
    void setDimensions(float w, float h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    float calculateArea() {
        return width * height;
    }

    void displayArea() {
        cout << "Area of Rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    float width, height;

    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    rect.setDimensions(width, height);
    rect.displayArea();

    return 0;
}

