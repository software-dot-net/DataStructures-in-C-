#include <iostream>
#define name(santosh) santosh > 1 ? 1:0
#define n 10

#ifdef n
    printf("name is defined \n");
#endif


int main(){
    bool x = name(10);
    std::cout << x << std::endl;
    return 0;
}
