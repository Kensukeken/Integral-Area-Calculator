#include "math_utils.h"

double trapezoidalRule(double (*function)(double), double a, double b, int numIntervals) {
    double h = (b - a) / numIntervals;
    double integral = 0.0;

    for (int i = 0; i < numIntervals; i++) {
        double x1 = a + i * h;
        double x2 = x1 + h;
        double y1 = function(x1);
        double y2 = function(x2);

        integral += (y1 + y2) / 2.0 * h;
    }
    return integral;
}
