#include <iostream>
using namespace std;
#define name(santosh) santosh > 1 ? 1:0
#define n 10



int main(){
    #ifdef n
        cout << ("name is defined \n");
    #endif

    bool x = name(10);
    std::cout << x << std::endl;
    return 0;
}
