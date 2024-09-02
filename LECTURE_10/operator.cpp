#include <iostream>

int main() {
    int a = 10, b = 5, result;
    bool condition;

    // Arithmetic Operators
    result = a + b;
    std::cout << "a + b = " << result << std::endl;

    result = a - b;
    std::cout << "a - b = " << result << std::endl;

    result = a * b;
    std::cout << "a * b = " << result << std::endl;

    result = a / b;
    std::cout << "a / b = " << result << std::endl;

    result = a % b;
    std::cout << "a % b = " << result << std::endl;

    // Relational Operators
    condition = (a == b);
    if (condition)
        std::cout << "a is equal to b" << std::endl;
    else
        std::cout << "a is not equal to b" << std::endl;

    condition = (a != b);
    if (condition)
        std::cout << "a is not equal to b" << std::endl;

    condition = (a > b);
    if (condition)
        std::cout << "a is greater than b" << std::endl;

    condition = (a < b);
    if (condition)
        std::cout << "a is less than b" << std::endl;

    condition = (a >= b);
    if (condition)
        std::cout << "a is greater than or equal to b" << std::endl;

    condition = (a <= b);
    if (condition)
        std::cout << "a is less than or equal to b" << std::endl;

    // Logical Operators
    condition = (a > b && b > 0);
    if (condition)
        std::cout << "a is greater than b AND b is greater than 0" << std::endl;

    condition = (a > b || b < 0);
    if (condition)
        std::cout << "a is greater than b OR b is less than 0" << std::endl;

    condition = !(a == b);
    if (condition)
        std::cout << "a is NOT equal to b" << std::endl;

    // Bitwise Operators
    result = a & b;
    std::cout << "a & b = " << result << std::endl;

    result = a | b;
    std::cout << "a | b = " << result << std::endl;

    result = a ^ b;
    std::cout << "a ^ b = " << result << std::endl;

    result = a << 1;
    std::cout << "a << 1 = " << result << std::endl;

    result = a >> 1;
    std::cout << "a >> 1 = " << result << std::endl;

    // Assignment Operators
    result = a;
    std::cout << "result = a -> " << result << std::endl;

    result += b;
    std::cout << "result += b -> " << result << std::endl;

    result -= b;
    std::cout << "result -= b -> " << result << std::endl;

    result *= b;
    std::cout << "result *= b -> " << result << std::endl;

    result /= b;
    std::cout << "result /= b -> " << result << std::endl;

    result %= b;
    std::cout << "result %= b -> " << result << std::endl;

    // Increment/Decrement Operators
    ++a;
    std::cout << "++a -> " << a << std::endl;

    b--;
    std::cout << "b-- -> " << b << std::endl;

    // Ternary Operator
    result = (a > b) ? a : b;
    std::cout << "Ternary result = " << result << std::endl;

    // sizeof Operator
    result = sizeof(a);
    std::cout << "sizeof(a) = " << result << " bytes" << std::endl;

    return 0;
}
