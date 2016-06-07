//
// Created by arm on 5/7/16.
//

// To compile: g++ -o hello_11 main_11.cpp -std=c++11
#include <iostream>

// constant guarantees compile time evaluation of an expression
constexpr auto greeting = "hello world!";

// lambda function: an annonymous way to define function object. Can be defined & passed.
//  itermreturn string, [] represents a capture (not capturing anything from env)
auto another_greeting = [] (std::string name) { return std::string("hello ") + name; };

int main() {
    std::cout << greeting << std::endl;
    std::cout << another_greeting("Armen") << std::endl;
}