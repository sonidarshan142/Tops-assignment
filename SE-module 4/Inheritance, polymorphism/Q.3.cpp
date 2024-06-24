/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& name, int age) : name(name), age(age) {}

    string getName() const { return name; }
    int getAge() const { return age; }
};

class Student : public Person {
private:
    double percentage;

public:
    Student(const string& name, int age, double percentage)
        : Person(name, age), percentage(percentage) {}

    double getPercentage() const { return percentage; }
};

class Teacher : public Person {
private:
    double salary;

public:
    Teacher(const string& name, int age, double salary)
        : Person(name, age), salary(salary) {}

    double getSalary() const { return salary; }
};

int main() {
    string name;
    int age;
    double percentage, salary;

    cout << "Enter details for Student:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "Percentage: ";
    cin >> percentage;
    cin.ignore();

    Student student(name, age, percentage);

    cout << "\nEnter details for Teacher:\n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "Salary: ";
    cin >> salary;
    cin.ignore();

    Teacher teacher(name, age, salary);

    cout << "\nStudent Details:\n";
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Percentage: " << student.getPercentage() << endl;

    cout << "\nTeacher Details:\n";
    cout << "Name: " << teacher.getName() << endl;
    cout << "Age: " << teacher.getAge() << endl;
    cout << "Salary: " << teacher.getSalary() << endl;

    return 0;
}

