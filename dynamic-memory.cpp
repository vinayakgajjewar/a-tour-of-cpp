#include <iostream>

// The C++ language uses the operators new and delete to dynamically allocate memory
int main() {

    // Allocate a new block of memory with space for 5 ints
    // myptr is a pointer to the first element of this block of memory
    // Thus, *myptr and myptr[0] are identical
    // The second element can be accessed with either foo[1] or *(foo+1)
    // Dynamic memory allocation is different from creating an array because the length of an array needs to be a constant
    // The dynamic memory allocation allows us to use any variable value as the size
    int *myptr;
    myptr = new int[5]; // The new operator returns a pointer to the beginning of the block of memory allocated
    *myptr = 20;
    std::cout << myptr[0] << "\n";

    // Instead of throwing an exception if the memory allocation fails, using nothrow will make charptr a null pointer instead
    int i;
    std::cin >> i;
    char *charptr;
    charptr = new (std::nothrow) char[i];
    if (charptr == nullptr) {
        std::cout << "Memory allocation failed\n";
    }

    // When we allocate memory dynamically, we can free that memory up again when we no longer need it
    // Use delete to free up a single element and use delete[] to free up a block of elements
    delete[] myptr;
    delete[] charptr;
}