# include <iostream>

int main() {
    int some_num = 5;
    // & is the "address-of" operator
    // The asterisk here IS NOT the dereference operator
    // It only means that we're declaring a pointer
    int *my_pointer = &some_num; // Address contains the memory address of some_num
    std::cout << my_pointer << "\n"; // Something like 0x10a3f8036

    // * is the "dereference" operator
    int another_num = *my_pointer; // Access the variable that my_pointer points to
    std::cout << another_num << "\n"; // Prints out 5

    char some_char;
    char *char_pointer = &some_char;
    *char_pointer = 'L'; // Indirectly setting the value of some_char
    std::cout << some_char << "\n";

    int my_array[20];
    int *array_pointer;
    // After this line, my_array and array_pointer would be very similar
    // However, array_pointer can be assigned a different address while my_array always points to the same block of 20 elements of type int
    array_pointer = my_array; // This is valid because an array can always be implicitly converted to a pointer of the proper type
    //my_array = array_pointer; // Not valid

    *(my_array+1) = 2; // Set the second index of my_array to 2 using the dereference operator
    my_array[0] = 1; // Set the first index of my_array to 1 using the offset operator (the square brackets)

    std::cout << my_array[0] << "\n";
    std::cout << my_array[1] << "\n";

    std::cout << *array_pointer << "\n";
    *array_pointer = 3;
    std::cout << *my_array << "\n";
}