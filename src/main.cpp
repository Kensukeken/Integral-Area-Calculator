#include <iostream>
#include "integral_calculator.h"
#include "input_parser.h"

using namespace std;

int main() {
    cout << "\033[0;35mWelcome to the Integral Area Calculation of y = X^2 Program!\n";
    
    while (true) {
        int option;
        cout << "\033[0;37mPlease choose an option: (1 or 2)" << endl;
        cout << "1. Calculate the integral" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        if (option == 1) {
            double a, b;
            int numIntervals;
            getUserInput(a, b, numIntervals);

            double result = calculateIntegral(a, b, numIntervals);
            cout << "The integral is area: " << result << endl;
        } else if (option == 2) {
            cout << "Exiting the program." << endl;
            break;
        } else {
            cout << "\033[0;31mInvalid option. Please choose again.\n" << endl;
        }
    }
}
