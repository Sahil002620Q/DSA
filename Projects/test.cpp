#include "stack.h"
#include <iostream>
using namespace std;
int main () {
    stack s1;
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.display();
    cout << endl ;
    s1.pop();
    s1.pop();
    s1.display();
}