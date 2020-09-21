#include "tree.h"


int main(){

    Tree<int> tree;
    tree.root->data = 10;
    
    tree.root->left = new node<int>;
    tree.root->left->data = 20;
    tree.root->left->left = NULL;
    tree.root->left->right = NULL;
    
    tree.root->right = new node<int>;
    tree.root->right->data = 30;
    tree.root->right->left = NULL;
    tree.root->right->right = NULL;

    tree.preordertraversal(tree.root);
    std::cout << "------------------------------------------------ \n";
    tree.inordertraversal(tree.root);
    std::cout << "------------------------------------------------ \n";
    tree.postodertraversal(tree.root);
    return 0;
}