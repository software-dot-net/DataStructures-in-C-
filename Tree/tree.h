
#ifndef TREE
#define TREE 1
#include <iostream>
#include "stack.h"
#include <queue>

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
        void LevelOrderTraversal(struct node<t> *root);
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
    if(method == "postorder"){
        Stack<struct node<t> *> stacker(100);
        struct node<t> *prev = NULL;
        do{
            while(root != NULL){
                stacker.push(root);
                root = root->left;
            }
            while((root == NULL) && (!stacker.isEmpty())){
                root = stacker.peek();
                std::cout << root->data << std::endl;
                if(root->right == NULL || root->right == prev){
                    std::cout << root->data << std::endl;
                    stacker.pop();
                    prev = root;
                    root = NULL;
                }
                else{
                    root = root->right;
                }
            }
        }while(!(stacker.isEmpty()));
    }
}
template<class t>
void Tree<t>::LevelOrderTraversal(struct node<t> *root){
    std::queue<struct node<t> *> Q;

    Q.push(root);
    while(!Q.empty()){
        root = Q.front();
        Q.pop();
        std::cout << root->data << std::endl;
        if(root->left != NULL){
            Q.push(root->left);
        }
        if(root->right != NULL){
            Q.push(root->right);
        }
    }
}

#endif