#include <iostream>
#include <stdlib.h>
#include "queues.h"

using namespace std;

int main(){
    queue<int> int_q(5);
    queue<float> float_q(5);

    for(int i=0;i<8;i++){
        int_q.Enqueue(i+1);
    }
    

    return 0;
}