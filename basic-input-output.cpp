#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::cout << "Standard output stream\n"; // << is the insertion character
    std::cout << "A string literal" << std::endl;

    std::string i;

    // A space, a tab, or a newline character may be used to separate inputs when using cin
    std::cin >> i; // >> is the extraction operator
    std::cout << i << std::endl;

    // Unless there is a reason not to, prefer getline() over cin
    std::getline(std::cin, i); // getline() takes the entire line of input
    std::cout << i << std::endl;

    std::string my_string = "1529";
    int my_int;
    std::stringstream(my_string) >> my_int; // Extract the numerical value 1529 into my_int
    std::cout << my_int << std::endl;
}