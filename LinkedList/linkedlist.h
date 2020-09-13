/*
    struct node (data) -> defines and l datatype (l may be int/float/double or anything)
    struct node (next) -> also contains an node pointer to store an address of type struct node

    init() function creates an head for the linkedlist
    
*/
#include <stdlib.h>
#include <iostream>

template<class l>
struct Node{
    l data;
    struct Node *next;
};

template<class l>
class LinkedList{
    private:
        struct Node *head;
    public:
        void init(void);
        LinkedList(){
            init();
        }
        void print(void);
        struct Node *createNode(l data);
        void append(struct Node *node);    
        void replaceHead(struct Node *node);
        struct Node *getLastNode(void);
        void insertAtIndex(int index,struct Node *node);
        void pop();
        void deleteAtIndex(int index);
        int length(void);            
};

template<class l>
void LinkedList<l>::insertAtIndex(int index,struct Node *node){
    int count = 0;
    struct Node *prev=NULL; struct Node *temp= head;
    while(count != index){
        prev = temp; temp = temp->next;
        count++;
    }
    prev->next = node;
    node->next = temp;
}

template<class l>
void LinkedList<l>::deleteAtIndex(int index){
    int count = 0;
    struct Node *prev=NULL; struct Node *temp= head;
    while(count != index){
        prev = temp; temp = temp->next;
        count++;
    }
    prev->next = temp->next;
}

template<class l>
struct Node *LinkedList<l>::getLastNode(void){
    struct Node *temp = head;
    while(temp->next != NULL)
    return temp;
}

template<class l>
struct Node *LinkedList<l>::createNode(l data){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
}

template<class l>
int LinkedList<l>::length(void){
    struct Node *temp = head;
    int len=1;
    while(temp->next != NULL) len++;
    return len;
}

template<class l>
void LinkedList<l>::append(struct Node *node){
    struct Node *lastone = getLastNode();
    lastone->next = node;
}

