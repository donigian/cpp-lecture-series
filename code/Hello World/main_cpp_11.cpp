//
// Created by arm on 5/7/16.
//

// To compile: g++ -o hello_11 main_11.cpp -std=c++11
#include <iostream>

constexpr auto greeting = "hello world!";
auto another_greeting = [] (std::string name) { return std::string("hello ") + name; };

int main() {
    std::cout << greeting << std::endl;
    std::cout << another_greeting("Armen") << std::endl;
}