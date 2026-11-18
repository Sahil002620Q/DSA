#include <iostream>
#include <vector>
using namespace std;
class MinStack {
public:
    int Top;
    vector<int> arr;
    vector<int> minstack;
    MinStack() {
        Top = -1;
    }
    
    void push(int value) {
        if(Top == -1 ) 
        {
            Top++;
            arr.push_back(value);
        }
        else
        {
            Top++;
            arr.push_back(value);
        }
       
        if(minstack.empty())
        {
            minstack.push_back(value);
        }
        else
        {
            minstack.push_back(min(value,minstack.back()));
        }
    }
    
    void pop() 
    {
        if(Top != -1)
        {
            Top--;
            arr.pop_back();
            minstack.pop_back();
        }
    }
    
    int top() 
    { 
        if(Top == -1) return -1;
        else return arr[Top];
    }
    
    int getMin() 
    {
        if(Top == -1) return -1;
        else
        {   
            int min = minstack.back();
            return min;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main()
{
    MinStack minStack ;// = new MinStack();
    minStack.pop();
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << endl ; // return -3
    minStack.pop();
    cout << minStack.top() << endl ;    // return 0
    cout << minStack.getMin() << endl ; // return -2
}