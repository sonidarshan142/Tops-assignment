/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include <iostream>
using namespace std;

class Students {
public:
    int rollNumber;
    void getRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

class Test : public Students {
public:
    int subject1Marks, subject2Marks;
    void getTestMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2Marks;
    }
};

class Result : public Test {
public:
    void displayTotalMarks() {
        int totalMarks = subject1Marks + subject2Marks;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;
    studentResult.getRollNumber();
    studentResult.getTestMarks();
    studentResult.displayTotalMarks();
    return 0;
}

