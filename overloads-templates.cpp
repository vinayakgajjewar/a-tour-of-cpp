#include <iostream>

int operate(int a, int b) {
    return (a / b);
}

double operate(double a, double b) {
    return (a * b);
}

// Define a function template
// T is a template parameter name
template <class T>
T summation(T a, T b) {
    T result = a + b;
    return result;
}

int main() {
    int x = 10;
    int y = 2;
    double c = 20.0;
    double d = 0.5;

    std::cout << operate(x, y) << "\n"; // Print out 5
    std::cout << operate(c, d) << "\n"; // Print out 10

    // Call the template function
    std::cout << summation<int>(5, 10) << "\n"; // Print out 15
    std::cout << summation<double>(3.5, 2.0) << "\n"; // Print out 5.5
}