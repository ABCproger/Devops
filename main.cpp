#include <iostream>
#include "FuncA.h"

int main() {
    FuncA func;
    double result = func.Calculate(0.5);
    std::cout << "Result: " << result << std::endl;
    return 0;
}