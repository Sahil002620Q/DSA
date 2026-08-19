#include <iostream>
#define max 5
using namespace std;

class stack
{
    private:
        int arr[max];
        int top;
    
    public:
        stack();
        bool empty();
        bool isfull();
        void push(int top); //int to void
        int peak();
        void pop();
        int display();
};

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

void stack::push(int top)
{
    arr[max] = top;
    top++;
    // return arr[max];
}

int stack::peak()
{   if(top == -1)
    {
        raise:
        "error";
    }
    return top;
}

void stack::pop()
{
    top--;
}

// int stack::display()
// {

// }

int main()
{
    stack s1;
    // cout << "empty? : " <<  s1.empty();
    if(s1.empty() == true){
        cout << "empty\n" ;
    }
    else{}
    cout << "peek : " << s1.peak() << endl ;
    s1.push(3) ;
    cout << "peek : " << s1.peak() << endl ;
    s1.push(4) ;
    cout << "peek : " << s1.peak() << endl ;
    s1.push(5) ;
    cout << "peek : " << s1.peak() << endl ;
    s1.push(53) ;
    cout << "peek : " << s1.peak() << endl ;
    s1.push(353) ;
    cout << "peek : " << s1.peak() << endl ;
    s1.push(111) ;
    
    cout << "peek : " << s1.peak() << endl ;
    if(s1.empty() == true){
        cout << "empty\n" ;
    }
    else
    {
        cout << "net empty";
    }
}