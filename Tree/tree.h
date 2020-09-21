
#ifndef TREE
#define TREE 1
#include <iostream>
#include "stack.h"

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
        void postodertraversal(struct node<t> *root);
        void inordertraversal(struct node<t> *root);
        void iterativeTraversal(char method[],struct node<t> *root);
        Tree(){
            root = new node<t>;
            root->data = 0;
            root->left = NULL;
            root->right = NULL;
        }
}; 

template<class t>
void Tree<t>::preordertraversal(struct node<t> *root){
    if(root){
        std::cout << root->data << std::endl;
        preordertraversal(root->left);
        preordertraversal(root->right); 
    }
}

template<class t>
void Tree<t>::postodertraversal(struct node<t> *root){
    if(root){
        postodertraversal(root->left);
        postodertraversal(root->right);
        std::cout << root->data << std::endl;
    }
}

template<class t>
void Tree<t>::inordertraversal(struct node<t> *root){
    if(root){
        postodertraversal(root->left);
        std::cout << root->data << std::endl;
        postodertraversal(root->right);
    }
}
template<class t>
void Tree<t>::iterativeTraversal(char method[],struct node<t> *root){
    if(method == "preorder"){
        Stack<struct node<t> *> stacker(100);
        while(true){
            while(root){
                std::cout << root->data << std::endl;
                stacker.push(root);
                root = root->left;
            }
            if(stacker.isEmpty()){
                break;
            }
            root = stacker.pop();
            root = root->right;
        }
    }
    if(method == "inorder"){
        Stack<struct node<t> *> stacker(100);
        while(true){
            while(root){
                stacker.push(root);
                root = root->left;
            }
            if(stacker.isEmpty()){
                break;
            }
            root = stacker.pop();
            std::cout << root->data << std::endl;
            root = root->right;
        }
    }
}
#endif