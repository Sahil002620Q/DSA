#ifndef QUEUE
#define QUEUE
#include <iostream>
#define max 5
class queue
{
    private:
        int arr[max];
        int front; 
        int rear;
    
    public:
        queue();
        bool empty();
        int enqueue(int top); 
        void dequeue(); 
        bool isfull();
        int peak();
        int back();
        void display();
};

queue::queue()
{
    front = -1;
    rear = -1;
}

bool queue::empty()
{
    if(front == -1 and rear == -1)
    {
        return 1;
    }
    else return 0;
}

bool queue::isfull()
{
    if(rear == max)
    {
        return 1;
    }
    else return 0;
}

int queue::enqueue(int num)
{
    rear++;
    if(front == -1){ front = 0; }
    return arr[rear] = num;
    
}

void queue::dequeue()
{
    front++;
}

int queue::peak()
{
    return arr[front];
}

int queue::back()
{
    return arr[rear];
}



void queue::display()
{
    for(int j = 0; j <= rear; j++)
    {
        std::cout << arr[j] << ' ';
    }
}

#endif