#include "integral_calculator.h"
#include <cassert>
#include <iostream>

void test_calculateIntegral() {
    // Test cases for calculateIntegral
    assert(calculateIntegral(0, 1, 10) == 0.3333); // Expected value
}

int main() {
    test_calculateIntegral();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
