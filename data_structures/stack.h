#ifndef STACK
#define STACK
#include <iostream>
#define max 5
using namespace std;

class stack
{
    private:
        int arr[max];
        int top; //pointer use as i in arr
    
    public:
        stack();
        bool empty();
        bool isfull();
        void push(int top);
        int peak();
        void pop();
        void display();
};

#endif