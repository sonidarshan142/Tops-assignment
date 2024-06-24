/*Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.*/
#include <iostream>
#include <string>
using namespace std;
class Car 
{
private:
    string company;
    string model;
    int year;

public:
    Car() : company(""), model(""), year(0) {}
    void setCompany(const string& comp) {
        company = comp;
    }

    void setModel(const string& mod) {
        model = mod;
    }

    void setYear(int yr) {
        year = yr;
    }

    string getCompany() const {
        return company;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() 
{
    Car myCar;

    myCar.setCompany("Toyota");
    myCar.setModel("Fortuner");
    myCar.setYear(2020);

    cout << "Car Details:" << endl;
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}

