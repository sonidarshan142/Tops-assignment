/*Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.*/

#include <iostream>
using namespace std;

class Date {
private:
    int day,month,year;

    bool isLeapYear(int year) const {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }

    int getDaysInMonth(int month, int year) const {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return isLeapYear(year) ? 29 : 28;
            default:
                return 0;
        }
    }

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValidDate() const {
        if (year < 1 || month < 1 || month > 12 || day < 1) {
            return false;
        }

        int daysInMonth = getDaysInMonth(month, year);
        if (day > daysInMonth) {
            return false;
        }

        return true;
    }

    void displayDate() const {
        if (isValidDate()) {
            cout << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid date!" << endl;
        }
    }
};

int main() {
    int day, month, year;

    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    Date date(day, month, year);
    date.displayDate();

    return 0;
}

