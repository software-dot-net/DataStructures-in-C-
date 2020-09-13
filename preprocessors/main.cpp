#include <iostream>
using namespace std;
#include "header.h"
#include "header.h"

#define onechecker(x) x == 1 ? 1:0
#define n 10


int main(){

    #undef n
    #ifndef n
        cout << ("n is not defined \n");
    #else
        cout << ("n is defined \n");
    #endif
    #undef HEADER
    #ifdef HEADER
        cout << "header.h is initialized \n";
    #else
        cout << "header.h is not definied \n";
    #endif

    bool x = onechecker(1);
    std::cout << x << std::endl;
    return 0;
}
