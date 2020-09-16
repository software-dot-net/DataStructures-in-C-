#include <iostream>
#include <stdlib.h>
#include "linkedlist.h"

int main(){

    LinkedList<int> int_l(10);
    LinkedList<float> float_l(10.1);

    struct Node<int> *node = int_l.createNode(12);
    int_l.append(node);

    int_l.print();

    return 0;
}