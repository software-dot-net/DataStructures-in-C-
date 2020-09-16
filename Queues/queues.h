
template<class t>
class queue{
    private:
        int capacity,front,rear;
        t *Q;
    public:
        bool isEmpty(void);
        bool isFull(void);
        void init(int size);
        void Enqueue(t data);
        t Dequeue(void);
        int length(void);
        bool isEmpty(void);
};

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
        rear = (rear + 1) % capacity;
        Q[rear] = data;
        if(front = -1) front = rear;
    }
}

template<class t>
t queue<t>::Dequeue(void){
    if(isEmpty()) std::cout << "The Queue is Empty " << std::endl;
    else{
        t deleted = Q[front];
        if(front == rear) front == rear = -1;
        else front = (front + 1) % capacity;
        return t;
    }
}


