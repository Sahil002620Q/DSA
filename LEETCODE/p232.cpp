#include <iostream>
#include <stack>
using namespace std;
class MyQueue {
public:
    stack<int> out;
    stack<int> in;

    MyQueue() 
    {

    }
    
    void push(int x) { //donennn
        in.push(x);
    }
    
    int pop() {   //donnnnn

        if(in.empty() && out.empty()) return -1;
        if(out.empty())
        {
            while(!in.empty())
            {
                int TOP = in.top();
                out.push(TOP);
                in.pop();
            }
        }

        int Popped = out.top();
        out.pop();
        return Popped;
        
    }
    
    int peek() { //done BTW i assumes that peek will return last pushed but it returns first pushed
        if(!out.empty())
        {
            return out.top();
        }
        if(out.empty())
        {
            while(!in.empty())
            {
                int TOP = in.top();
                out.push(TOP);
                in.pop();
            }
        }
        if(in.empty() && out.empty()) return -1;
        return out.top();
    }
    
    bool empty() { //done 
        return in.empty() && out.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main()
{
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    cout << q.peek() << endl;
    cout << (q.empty() ? "Empty" : "Not empty");


   
}