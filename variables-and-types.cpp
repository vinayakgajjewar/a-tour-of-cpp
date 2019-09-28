// Variable: A portion of memory used to store a value
// Identifiers should always begin with a letter (never a digit)
// You can't use reserved keywords as identifiers
// C++ is case-sensitive
// Fundamental data types: character types, numerical integer types, floating-point types, boolean type
// Character types: They represent a single character such as 'A' or '$'

#include <iostream>

int main()
{
    // C++ is strongly-typed, which means that every variable has to be declared with its type prefacing it
    int a = 6;
    int b = 3;
    std::cout << a + b << "\n";

    // 3 ways to initialize a variable:
    int x = 1; // C-like initialization
    int y (1); // Constructor initialization new in C++
    int z {1}; // Uniform initialization introduced in C++11
    std::cout << x + y + z << "\n";
}