//
// Created by arm on 5/8/16.
//
// Extended Form

#include <iostream>

// total count of args passed to executable: 0...argc
// argv: array of null terminated multi-byte strings
int main (int argc, char* argv[]) {

    if (argc < 5) {
        std::cerr << "Invalid # of arguments, atleast 4 needed" << std::endl;
        return -1;
    }

    std::cout << "Total arguments: " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
        std::cout << "arg[" << i << "]= " << argv[i] << std::endl;
    }
}