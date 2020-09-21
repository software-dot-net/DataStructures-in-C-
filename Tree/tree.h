
#ifndef TREE
#define TREE 1
#include <iostream>

template<class n>
struct node{
    struct node<n> *left;
    struct node<n> *right;
    n data;
};

template<class t>
class Tree{
    public:
        struct node<t> *root;
        void preordertraversal(struct node<t> *root);
}; 

template<class t>
void Tree<t>::preordertraversal(struct node<t> *root){
    while(root){
        std::cout << root->data;
        preordertraversal(root->left);
        preordertraversal(root->right); 
    }
}
#endif