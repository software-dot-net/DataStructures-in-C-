/*
    an stack class header file with the bacis ADT declared
    top -> represents the top of the stack;
    array -> represents the stack (to make the stack more dynamic use used the template class to support any datatype)
    capacity -> represents the capacity of the stack
    push function is used to push (t datatype) data into the stack
    pop function is used to return the top most data in the stack 
    peek function is used to return the top pointing element
    isFull function return 1 when stack is full and 0 when it is not
    isEmpty function return 1 when stack is empty and 0 when it is not
*/

template<class t>
class Stack{
    private:
        int top;
        t *array;
        int capacity;
    public:
        void init(int size);
        Stack(int size){
            init(size);
        }
        void push(t data);
        t pop(void);
        t peek(void);
        void print(void);
        bool isFull(void);
        bool isEmpty(void);
        int length(void);
};

template<class t>
int Stack<t>::length(){
    return (top + 1);
}

template<class t>
void Stack<t>::init(int size){
    top = -1;
    array = (t *)malloc(sizeof(t) * size);
    capacity = size;
}

template<class t>
bool Stack<t>::isFull(void){
    return (top == capacity-1);
}

template<class t>
bool Stack<t>::isEmpty(void){
    return (top == -1);
}

template<class t>
void Stack<t>::push(t data){
    if(isFull()) std::cout << "stack is full \n";
    else{
        top++;
        array[top] = data;
    } 
}

template<class t>
t Stack<t>::pop(void){
    if(isEmpty()) std::cout << "stack is empty \n";
    else{
        t deleted = array[top];
        top--;
        return deleted;
    }
}

template<class t>
void Stack<t>::print(void){
    std::cout << "[ ";
    for(int i=0;i<=top;i++){
        std::cout << array[i] << " ";
    }
    std::cout << "] \n";
}

template<class t>
t Stack<t>::peek(void){
    return (array[top]);
}