// C++ provides the following classes to perform input/output of characters to and from files:
// ofstream: Stream class to write to files
// ifstream: Stream class to read from files
// fstream: Stream class to both read and write to/from files

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // my_file is a stream object
    std::ofstream my_ostream;
    // Here we associate the stream object with a real file
    my_ostream.open("my_file.txt");
    my_ostream << "Writing this text to a file\n";
    my_ostream << "Another line of text\n";
    // Close the stream to free up system resources
    my_ostream.close();

    std::ifstream my_istream("my_file.txt");
    std::string line;
    std::getline(my_istream, line);
    std::cout << line << "\n";
    std::getline(my_istream, line);
    std::cout << line << "\n";
    // Close the stream to free up system resources
    my_istream.close();
}