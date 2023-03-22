#include <iostream>

int main()
{
    double num1, num2;

    std::cout << "This program will perform 4 basic operations to 2 numbers.\nAddition, Subtraction, Multiplication, and Division.\n";

    std::cout << "Please enter a number: ";
    std::cin >> num1;
    std::cout << "Please enter another number: ";
    std::cin >> num2;

    std::cout << std::endl << std::endl << num1 << " + " << num2 << " = " << num1 + num2;
    std::cout << std::endl << std::endl << num1 << " - " << num2 << " = " << num1 - num2;
    std::cout << std::endl << std::endl << num1 << " * " << num2 << " = " << num1 * num2;
    std::cout << std::endl << std::endl << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;

    return 0;
}