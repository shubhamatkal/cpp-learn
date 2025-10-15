#include <iostream>

int main(){

    std::string name;
    std::cout << "Enter your name ";
    std::getline(std::cin, name);
    if(name.length()> 12){
        std::cout << "Your name cant be over 12 chars";

    }else{
        std::cout << "welcome" << name;
    }

    while (11==11)
    {
        std::cout << "hello";
    }
    

    return 0;
}