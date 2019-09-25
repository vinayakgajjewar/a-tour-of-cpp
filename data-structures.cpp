#include <iostream>
#include <string>

struct vegetable {
    std::string name;
    std::string color;
} veggie_1;

int main() {
    vegetable veggie_2;

    veggie_1.name = "broccoli";
    veggie_1.color = "green";
    veggie_2.name = "carrot";
    veggie_2.color = "orange";

    std::cout << veggie_1.name << "\n";
    std::cout << veggie_2.name << "\n";
    std::cout << veggie_1.color << "\n";
    std::cout << veggie_2.color << "\n";
}