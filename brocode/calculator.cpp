#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;
    std::cout << "****CALCULATOR******\n";

    std::cout<<"Enter either (+ - / *): ";
    std::cin >> op;
    std:: cout << "Enter 1st number: ";
    std::cin >> num1;
    std:: cout << "Enter 2nd number: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        result = 0;
        std::cout << "Invalid operator!\n";
        break;
    
    }
    std::cout << "Answer is " << result << '\n';

    std::cout << "****END******\n";


    return 0;
}