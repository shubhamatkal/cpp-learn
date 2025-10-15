#include <iostream>

int main(){

    double temp;
    char unit;
    std::cout << "Temperature conversion";

    std::cout << "F and C is farenheit and celsious";

    std::cout << "What unit would u like to convert to: "; std::cin >> unit;
    if (unit == 'F' || 'f')
    {
        std::cout << "enter the temp in celcious: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        std::cout << "temperature is " << temp << "F\n";

    } else if (unit == 'C' || 'c' ){
        std::cout << "cant do this, thanks";
    }
    

    return 0;
}