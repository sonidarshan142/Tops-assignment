/*Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation*/
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;

public:
    Student(const std::string& studentName, const std::string& sClass, int rollNum, double studentMarks)
        : name(studentName), studentClass(sClass), rollNumber(rollNum), marks(studentMarks) {}

    string calculateGrade() {
        if (marks >= 90) {
            return "A+";
        } else if (marks >= 80) {
            return "A";
        } else if (marks >= 70) {
            return "B";
        } else if (marks >= 60) {
            return "C";
        } else {
            return "D";
        }
    }

    void displayInformation() {
        cout << "\nName: " << name <<endl;
        cout << "Class: " << studentClass <<endl;
        cout << "Roll Number: " << rollNumber <<endl;
        cout << "Marks: " << marks <<endl;
        cout << "Grade: " << calculateGrade() <<endl;
    }
};

int main() {
    string studentName;
    string sClass;
    int rollNum;
    double studentMarks;

    cout << "Student details:" << std::endl;
    cout << "Name: ";
    getline(std::cin, studentName);
    cout << "Class: ";
    getline(std::cin, sClass);
    cout << "Roll number: ";
    cin >> rollNum;
    cout << "Marks (0-100): ";
    cin >> studentMarks;

    Student student(studentName, sClass, rollNum, studentMarks);
    student.displayInformation();

    return 0;
}


