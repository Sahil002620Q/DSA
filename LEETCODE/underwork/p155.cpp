#include <iostream>
#include <vector>
using namespace std;
class MinStack {
public:
    int Top;
    vector<int> arr;
    MinStack() {
        Top = -1;
    }
    
    void push(int value) {
        Top++;
        arr.push_back(value);
    }
    
    void pop() { //done
        Top--;
        arr.pop_back();
    }
    
    int top() { //done but if ?
        if(Top == -1) return -1;
        else return arr[Top];
    }
    
    int getMin() {
        if(Top == -1) return -1;
        else
        {   
            int min = arr[0];
            for (int i = 0; i < arr.size(); i++)
            {
                if(arr[i] < min) min = arr[i];
            }
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
    MinStack minStack = new MinStack();
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << endl ; // return -3
    minStack.pop();
    cout << minStack.top() << endl ;    // return 0
    cout << minStack.getMin() << endl ; // return -2
}