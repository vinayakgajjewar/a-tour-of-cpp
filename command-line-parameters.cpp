#include <iostream>

// argc is the number of command-line parameters
// argc is always at least 1 because the first string in argv is the command used to run the program
// argv is the array of arguments, the first one being the name of the program
int main(int argc, char* argv[]) {

    // Print out the name of the program without the arguments
    std::cout << argv[0] << "\n";

    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " NAME\n";
    } else {
        std::cout << "Hello " << argv[1] << "\n";
    }
}