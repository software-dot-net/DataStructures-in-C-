#include <iostream>
#include <stdlib.h>
#include "stack.h"


int main(){

    Stack<int> int_stack(5);
    Stack<float> float_stack(5);
    
    int_stack.push(10);    
    float_stack.push(10.5);

    if(int_stack.pop() > float_stack.pop())
        std::cout << "10 is greator \n";
    else
        std::cout << "10.5 is greator \n";

    return 0;
}