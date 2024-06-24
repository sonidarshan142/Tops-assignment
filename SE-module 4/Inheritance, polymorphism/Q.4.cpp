//Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;

class PersonalDetails 
{
protected:
    string name;
    int rollNo;
public:
    void getPersonalDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Marks {
protected:
    float math, physics, chemistry;
public:
    void getMarks() {
        cout << "Enter marks for Math, Physics, and Chemistry: ";
        cin >> math >> physics >> chemistry;
    }
};

class Student : public PersonalDetails, public Marks {
public:
    void displayMarkSheet() {
        cout << "Mark Sheet" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Math: " << math << endl;
        cout << "Physics: " << physics << endl;
        cout << "Chemistry: " << chemistry << endl;
    }
};

int main() 
{
    Student student;
    student.getPersonalDetails();
    student.getMarks();
    student.displayMarkSheet();
    return 0;
}

