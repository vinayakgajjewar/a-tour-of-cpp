// A Tour of C++: The Basics

#include <iostream>

double square(double x) {
    return x * x;
}

constexpr double summation(double x, double y) {
    return x + y;
}

void print_square(double x) {
    std::cout << "The square of " << x << " is " << square(x) << "\n";
}

int main() {

    int inches = 13;
    bool succeeded = false;
    char initial = 'U';
    double pi = 3.1415;

    auto something = 6.73;
    auto something_else = true;

    double sum = inches + pi;
    int another_sum = inches + pi;

    int i = 7.6; // Truncated to 7
    std::cout << "i = " << i << "\n";
    i += 2;
    std::cout << "i = " << i << "\n";

    std::cout << "Hello world\n";
    print_square(4);
    print_square(3.14159265);

    const int blah = 17; // A named constant
    constexpr double blah2 = summation(1.3, 2.4); // summation() is a constexpr so this is okay
}