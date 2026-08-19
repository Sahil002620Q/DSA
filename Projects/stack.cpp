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
}s2;

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
        cout << arr[j] << ' ';
    }
}

int main()
{
    stack s1;
    cout << (s1.empty() == true ? "is empty : true\n" : "is empty : false\n");
   
    cout << "peek : " << s1.peak() << endl ;
    s1.push(3);
    cout << "peek : " << s1.peak() << endl ;

    s1.push(32);
    cout << "peek : " << s1.peak() << endl ;

    s1.push(13);
    // s1.pop() ;
    cout << "peek : " << s1.peak() << endl ;
    s1.display();

    s1.pop();
    cout << "\nlast popped, after pop peak : " << s1.peak() << endl ; 
    cout << (s1.empty() == true ? "is empty : true\n" : "is empty : false\n");

}
