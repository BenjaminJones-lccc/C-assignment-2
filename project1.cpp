#include <iostream>
#include <random>


using namespace std;


int main() {
    int simulationDays = 10;

    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(1, 100);


    for (int day = 1; day <= simulationDays; day++) {
        int randomNumber = distribution(generator);

        cout << "day"  << ": ";
        cout << "Random number = " << randomNumber << endl;

    }

    return 0;
}