#include <iostream>

class Rectangle {
    int width; // By default, width is private
    int height; // By default, height is private
public:
    void set_vals(int, int); // set_values has only been declared but its definition is outside of the class
    int get_area() { // get_area's definition was included within the class definition because of its simplicity
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
    Rectangle rect2; // Because a class is a type, we can have multiple objects of type Rectangle
    rect2.set_vals(5, 6);
    std::cout << rect2.get_area() << "\n";
}