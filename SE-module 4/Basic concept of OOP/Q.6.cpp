/*Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.*/

#include <iostream>
using namespace std;
class Person {
private:
         string name;
          int age;
        string country;

public:
    Person(string n, int a,string c) : name(n), age(a), country(c) {}

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(string c) {
        country = c;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCountry() {
        return country;
    }
};

int main() 
{
    Person person("Dhaval", 20, "USA");

    cout << "Name: " << person.getName() <<endl;
    cout << "Age: " << person.getAge() <<endl;
    cout << "Country: " << person.getCountry() <<endl;

    person.setName("Darshan");
    person.setAge(20);
    person.setCountry("India");

    cout << "New Name: " << person.getName() <<endl;
    cout << "New Age: " << person.getAge() <<endl;
    cout << "New Country: " << person.getCountry() <<endl;

    return 0;
}

