#include "input_parser.h"
#include <iostream>

using namespace std;

void getUserInput(double &a, double &b, int &numIntervals) {
    cout << "\033[0;32mEnter the lower limit of the interval: ";
    cin >> a;
    cout << "Enter the upper limit of the interval: ";
    cin >> b;
    cout << "Enter the number of intervals: ";
    cin >> numIntervals;
}
