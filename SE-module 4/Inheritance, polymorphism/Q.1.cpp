/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/

#include <iostream>
using namespace std;

class Cricketer {
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputData() {
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }
    void calculateAverageRuns() {
        int matchesPlayed = 10;
        averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
    }

    void displayData() {
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();
    return 0;
}

