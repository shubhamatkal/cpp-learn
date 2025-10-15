#include <iostream>

int main(){
    //input and outputs
    std::string name;
    int age;
    std::cout << "What is your age?";
    std::cin >> age;
    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    // int students = 20;
    // students = students + 1;
    // std:: cout << students <<"\n";
    

    return 0;
}