#include <iostream>
#include <string>

struct vegetable
{
    std::string name;
    std::string color;
} veggie_1;

int main()
{
    veggie_1.name = "broccoli";
    veggie_1.color = "green";

    vegetable veggie_2 = {"carrot", "orange"}; // Using an initializer list to initialize a struct

    std::cout << veggie_1.name << "\n";
    std::cout << veggie_2.name << "\n";
    std::cout << veggie_1.color << "\n";
    std::cout << veggie_2.color << "\n";
}