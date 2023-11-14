#include <iostream>
float problemSolution5(float x, float y, char operation) {
    float result;
    switch (operation) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y != 0) {
                result = x / y;
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
                result = 0.0;
            }
            break;
        default:
            std:: cerr << "Does not work with this one! " << std::endl;
            result = 0.0;
            break;
    }
    return result;
}}