#ifndef HEADER
#define HEADER 1

template<class c>
class calculator{
    public:
        c add(c a,c b);
        c sub(c a,c b);
        c mul(c a,c b);
        c div(c a,c b);
};

template<class c>
c calculator<c>::add(c a,c b){
    return (a + b);
}

template<class c>
c calculator<c>::sub(c a,c b){
    return (a - b);
}

template<class c>
c calculator<c>::mul(c a,c b){
    return (a * b);
}

template<class c>
c calculator<c>::div(c a,c b){
    return (a / b);
}

#endif