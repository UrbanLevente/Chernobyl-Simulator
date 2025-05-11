#include <iostream>
#include "TestClass.h"

int main() {
    TestClass test;
    test.SayHello();

    int result = TestClass::Add(2, 3);
    std::cout << "2 + 3 = " << result << std::endl;

    return 0;
}
