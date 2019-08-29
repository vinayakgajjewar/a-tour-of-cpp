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

bool accept() {
    std::cout << "Do you want to accept? (y / n)\n";
    char answer = 0;
    std::cin >> answer;

    if (answer == 'y') {
        return true;
    } else {
        return false;
    }
}

bool accept_2() {
    std::cout << "Do you want to accept? (y / n)\n";
    char answer = 0;
    std::cin >> answer;

    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default: // If there is no default, then no action is taken if the input doesn't match any of the cases
            std::cout << "I'll take that as a no.\n";
            return false;
    }
}

bool accept_3() {
    int tries = 0;
    while (tries < 3) {
        std::cout << "Do you want to accept? (y / n)\n";
        char answer = 0;
        std::cin >> answer;

        switch (answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                std::cout << "I don't understand that.\n";
                tries++;
        }
    }
    std::cout << "I'll take that as a no.\n";
    return false;
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

    std::cout << accept() << "\n";
    std::cout << accept_2() << "\n";
    std::cout << accept_3() << "\n";
}