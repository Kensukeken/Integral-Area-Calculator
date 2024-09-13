#include <iostream> // Declares objects that control reading from and writing to the standard streams
#include <cmath> // Means before proceeding to programme once look at these library
using namespace std;  // Using the standard namespace

double function(double x);
double calculateIntegral(double a, double b, int numIntervals); 

int main() {
  cout << "\033[0;35mWelcome to the Integral Area Calculation of y = X^2 Program!\n"; // Welcoming screen
  
  while (true) {
    int option;
    cout << "\033[0;37mPlease choose an option: (1 or 2)" << endl; // My max option is: 2
    cout << "1. Calculate the integral" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: "; // User choice
    cin >> option;

    if (option == 1) { // If user enters 1, this code appear
      int numIntervals;
      cout << "\033[0;32mEnter the lower limit of the interval: ";
      double a;
      cin >> a;
      cout << "Enter the upper limit of the interval: ";
      double b;
      cin >> b;
      cout << "Enter the number of intervals: ";
      cin >> numIntervals;

      double result = calculateIntegral(a, b, numIntervals);  // Calculate the integral of y = x^2
      cout << "The integral is area: " << result << endl;
    } else if (option == 2) { // If user enters 2, this code rise
      cout << "Exiting the program." << endl; // Exits the program
      break;
    } else {
      cout << "\033[0;31mInvalid option. Please choose again.\n" << endl; // Comes when user doesn't choose 1 or 2. Invalid number 
    }
  }
}
//--------------------------------------------------------------------------------------------------------------

// Function to calculate the value of x squared
double function(double x){
    return x * x; // Calculates the value of y = x^2 between the limits of a and b, we may determine the area under the curve y = f(x) between x = a and x = b
}

// Function to calculate the integral using the trapezoidal rule
double calculateIntegral(double a, double b, int numIntervals) {
  double h = (b - a) / numIntervals;  // Calculate the width of each interval
  double integral = 0.0;  // Initialize the value of the integral

  // Loop through each interval
  for (int i = 0; i < numIntervals; i++) {
    double x1 = a + i * h;  // Calculate the left endpoint of the interval
    double x2 = x1 + h;  // Calculate the right endpoint of the interval
    double y1 = function(x1);  // Calculate y for x1 (y1 = x1^2)
    double y2 = function(x2);  // Calculate y for x2 (y2 = x1^2)
    
    integral += (y1 + y2) / 2.0 * h;  // Approximate the integral using the trapezoidal rule
  }
  return integral;  // Return the calculated value of the integral
}