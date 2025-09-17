#include "foo.h"
#include <iostream>

void say_hello(std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}