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

    /*
    std::cout << "preorder------------------------------------------------ \n";
    tree.preordertraversal(tree.root);
    std::cout << "inorder------------------------------------------------ \n";
    tree.inordertraversal(tree.root);
    std::cout << "postorder------------------------------------------------ \n";
    tree.postodertraversal(tree.root);
    std::cout << "preorder------------------------------------------------ \n";
    tree.iterativeTraversal("preorder",tree.root);
    std::cout << "inorder------------------------------------------------ \n";
    tree.iterativeTraversal("inorder",tree.root);
    */
    std::cout << "postorder------------------------------------------------ \n";
    tree.iterativeTraversal("postorder",tree.root);
    std::cout << "levelorder------------------------------------------------ \n";
    tree.LevelOrderTraversal(tree.root);
    
    return 0;
}