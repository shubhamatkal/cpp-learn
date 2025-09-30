#include <iostream>

namespace first{
    int x = 1;

}

namespace second{
    int x =2;
}

int main(){
    using namespace std;
    int x = 0;
    // int x = 1;
    cout << x;
    return 0;
}