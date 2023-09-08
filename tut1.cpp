#include <iostream>
#include <string>

int main() {

    std::string fullName;
    int age;
    std::string collegeName;

    // Prompt the user for input
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cin.ignore();

    std::cout << "Enter your college name: ";
    std::getline(std::cin, collegeName);

    std::cout << "\nFull Name: " << fullName << " and College Name: " << collegeName << "\n";
    std::cout << "Age: " << age << "\n";

    return 0;
}