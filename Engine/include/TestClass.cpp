#include "TestClass.h"
#include <iostream>

TestClass::TestClass() {}

void TestClass::SayHello() const {
    std::cout << "Hello from Engine DLL!" << std::endl;
}

int TestClass::Add(int a, int b) {
    return a + b;
}