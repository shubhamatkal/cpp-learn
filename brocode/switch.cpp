#include <iostream>

int main(){
    int month;
    std:: cout << "Enter the month (1-12): ";
    std::cin >> month;
    std::cout << "Entered number is " << month << "\n";

    switch (month)
    {
    case 1:
        std::cout << "it is january";
        break;
    case 2: std::cout << "it is february";break;

    
    default:
        std:: cout << "pls enter the numbers in the range only";
        break;
    }

    return 0;
}