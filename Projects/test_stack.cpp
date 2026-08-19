#include "stack.h"

int main()
{
    stack s1;
    s1.push(1);
    cout << s1.peak() << endl ;
    s1.push(2);
    cout << s1.peak() << endl ;
    s1.push(3);
    cout << s1.peak() << endl ;
    s1.push(4);
    cout << s1.peak() << endl ;
    s1.push(5);
    cout << s1.peak() << endl ;
    s1.pop();
    cout << s1.peak() << endl ;

    s1.display();

}