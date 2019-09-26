#include <vector>
#include <iostream>

int main()
{
    std::vector<int> my_vector = {9, 4, 6, 3, 1}; // No need to specify length at initialization!
    std::cout << my_vector[2] << "\n"; // Print the 3rd vector element
    std::cout << my_vector.at(2) << "\n"; // Print the 3rd vector element as well
    my_vector = {0, 3, 6}; // Vectors automatically resize and deallocate memory
    std::cout << my_vector.size() << "\n"; // Vectors remember their length
    my_vector.resize(5); // Resizing is easy (but computationally expensive)
}