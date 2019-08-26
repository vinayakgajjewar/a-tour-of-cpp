// A Tour of C++: The Basics

#include <iostream>

double square(double x) {
    return x * x;
}

void print_square(double x) {
    std::cout << "The square of " << x << " is " << square(x) << "\n";
}

int main() {
    std::cout << "Hello world\n";
    print_square(4);
    print_square(3.14159265);
}