#include <iostream>

class Rectangle {
    int width; // By default, width is private
    int height; // By default, height is private
public:
    void set_vals(int, int);
    int get_area() {
        return width * height;
    }
} rect; // Declare an object of type Rectangle

void Rectangle::set_vals(int a, int b) { // The :: is the scope operator and it's used to define a member function outside of the class itself
    width = a;
    height = b;
}

int main() {

    rect.set_vals(3, 4);
    std::cout << rect.get_area() << "\n";
    Rectangle rect2;
    rect2.set_vals(5, 6);
    std::cout << rect2.get_area() << "\n";
}