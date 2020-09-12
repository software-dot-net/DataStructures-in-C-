/*
    struct node (data) -> defines and l datatype (l may be int/float/double or anything)
    struct node (next) -> also contains an node pointer to store an address of type struct node

    init() function creates an head for the linkedlist
    
*/

template<class l>
struct Node{
    l data;
    struct Node *next;
};

template<class l>
class LinkedList{
    public:
        void init();
        LinkedList(){
            init();
        }    

};