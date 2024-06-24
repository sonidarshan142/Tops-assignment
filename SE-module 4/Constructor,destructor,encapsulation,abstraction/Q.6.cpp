/*Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor*/

#include <iostream>
#include <string>
using namespace std;

class Employee 
{
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double empSalary)
        : name(empName), employeeID(empID), salary(empSalary) {}
    void setSalaryBasedOnPerformance(char performanceRating) {
        switch (performanceRating) {
            case 'A':
                salary *= 1.10;
                break;
            case 'B':
                salary *= 1.05;
                break;
            case 'C':
                break;
            case 'D':
                salary *= 0.90;
                break;
            default:
                cout << "Invalid performance rating." << endl;
        }
    }

    double getSalary() const {
        return salary;
    }
    void displayEmployeeDetails() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() 
{
    string name;
    int employeeID;
    double salary;
    char performanceRating;

    cout << "Enter employee name:";
    getline(cin, name);
    cout << "Enter employee ID:";
    cin >> employeeID;
    cout << "Enter employee salary:";
    cin >> salary;
    cout << "Enter employee performance rating (A, B, C, D):";
    cin >> performanceRating;

    Employee emp(name, employeeID, salary);
    emp.setSalaryBasedOnPerformance(performanceRating);
    emp.displayEmployeeDetails();

    return 0;
}

