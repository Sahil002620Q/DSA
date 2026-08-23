#include "stack.h"

stack::stack()
{
    top = -1;
}

bool stack::empty()
{
    if(top == -1)
    {
        return 1;
    }
    else return 0;
}

bool stack::isfull()
{
    if(top == max)
    {
        return 1;
    }
    else return 0;
}

void stack::push(int num)
{
    top++;
    arr[top] = num;
}

int stack::peak()
{
    return arr[top]; 
}

void stack::pop()
{
    top--;
}

void stack::display()
{
    for(int j = 0; j <= top; j++)
    {
        std::cout << arr[j] << ' ';
    }
}