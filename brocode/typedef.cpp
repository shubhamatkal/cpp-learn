#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
using textt_t = std::string;

int main(){
    // pairlist_t pairlist;
    text_t firstname= "Shubham";
    std::cout << firstname;
    number_t x = 23;
    std::cout << x << '\n';
    textt_t name = "s";
    std::cout << name << '\n';
    return 0;
}