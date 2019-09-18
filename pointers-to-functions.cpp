#include <iostream>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int operation(int a, int b, int (*some_func)(int, int)) {
    return (*some_func)(a, b);
}

int main() {
    std::cout << operation(5, 10, add) << "\n";
    std::cout << operation(10, 5, sub) << "\n";
}