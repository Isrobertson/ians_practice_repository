#include <iostream>
// #include "second_file_test.h" Note-to-self: compiling multiple files via g++ is a little complicated

int main()
{
    char inputDelay;
    std::cout << "Hello world\n";
    std::cout << "This is just testing visual studio code and manually adding files" << std::endl;

    // outputMessage(); // displays message from other file

    std::cout << "\nEnter any key to exit ";
    std::cin >> inputDelay;
    return 0;
}