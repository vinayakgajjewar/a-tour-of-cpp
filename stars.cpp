#include <iostream>


void stars1(int n) {
    for (int i = 1; i <= n; i++) { // For loop for the lines
        int num_spaces = n - i;
        for (int j = 0; j < num_spaces; j++) { // For loop for the spaces
            std::cout << " ";
        }
        for (int j = 0; j < i; j++) { // For loop for the stars
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

int main() {
    stars1(5);
}