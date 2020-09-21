#include "tree.h"


int main(){

    Tree<int> tree;
    tree.root->data = 30;
    
    tree.root->left = new node<int>;
    tree.root->left->data = 10;
    
    tree.root->right = new node<int>;
    tree.root->right->data = 20;
    
    std::cout << tree.root->data << std::endl;
    
    //tree.preordertraversal(tree.root);

    return 0;
}