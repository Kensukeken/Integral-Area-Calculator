#include "integral_calculator.h"
#include "math_utils.h"

double function(double x) {
    return x * x;
}

double calculateIntegral(double a, double b, int numIntervals) {
    return trapezoidalRule(function, a, b, numIntervals);
}
