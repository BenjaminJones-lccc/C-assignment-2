#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1;
    int num2;
    int num3;
    int num4;


    cin >> num1 >> num2 >> num3 >> num4;


    //int ari
    int product = num1 * num2 * num3 * num4;
    int average = (num1 + num2 + num3 + num4) / 4;

    cout << product << " " << average << endl;


    // float-point ari
    double productDouble =
        static_cast<double>(num1) *
        static_cast<double>(num2) *
        static_cast<double>(num3) *
        static_cast<double>(num4);

    double averageDouble =
        (static_cast<double>(num1) +
         static_cast<double>(num2) +
         static_cast<double>(num3) +
         static_cast<double>(num4)) / 4.0;
    

    cout << fixed << setprecision(3);
    cout << productDouble << " " << averageDouble << endl;

    return 0;

}