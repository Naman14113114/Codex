#include <iostream>
#include <cmath>

int main() {
    char operation;
    double num1, num2, result;

    std::cout << "Enter an operation (+, -, *, /, | for absolute): ";
    std::cin >> operation;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 1; 
            }
            break;
        case '|': 
            result = std::abs(num1);
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            return 1; 
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
