#include <iostream>
#include <stdlib.h>

template<class t>
class queue{
    private:
        int capacity,front,rear;
        t *Q;
    public:
        void print(void);
        bool isEmpty(void);
        bool isFull(void);
        void init(int size);
        void Enqueue(t data);
        t Dequeue(void);
        int length(void);
        queue(int size){
            init(size);
        }
};

template<class t>
void queue<t>::print(void){
    std::cout << "[ ";
    for(int i=0;i<=rear;i++) std::cout << Q[i] << " ";
    std::cout << "]";
}

template<class t>
int queue<t>::length(void){
    return ((capacity - rear + front + 1) % capacity);
}

template<class t>
bool queue<t>::isFull(void){
    return ((rear + 1) % capacity == front);
}

template<class t>
bool queue<t>::isEmpty(void){
    return (front == -1);
}

template<class t>
void queue<t>::init(int size){
    capacity = size;
    front = rear = -1;
    Q = (t *)malloc(sizeof(t) * capacity);
}

template<class t>
void queue<t>::Enqueue(t data){
    if(isFull()) std::cout << "The Queue is Full " << std::endl;
    else{
        std::cout << front << rear << std::endl;
        rear = (rear + 1) % capacity;
        Q[rear] = data;
        if(front = -1){ front = rear; }
    }
}

template<class t>
t queue<t>::Dequeue(void){
    if(isEmpty()) 
        std::cout << "The Queue is Empty " << std::endl;
    else{
        t deleted = Q[front];
        if(front == rear) front == rear = -1;
        else front = (front + 1) % capacity;
        return deleted;
    }
}


