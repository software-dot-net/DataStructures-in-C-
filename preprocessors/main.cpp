#include <iostream>
using namespace std;
#define onechecker(x) x == 1 ? 1:0
#define n 10


int main(){
    #ifndef n
        cout << ("name is defined \n");
    #endif

    bool x = onechecker(1);
    std::cout << x << std::endl;
    return 0;
}
