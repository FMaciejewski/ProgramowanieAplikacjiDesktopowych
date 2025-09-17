#include "foo.h"
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    say_hello(name);
    std::cin.get();
    return 0;
}