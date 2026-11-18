#include <iostream>
#include <queue>
using namespace std;
class MyStack {
public:
    queue<int> in;
    queue<int> out;
    int back;
    int prev  =-1; 
    MyStack() {
       
    }
    
    void push(int x) 
    {
        in.push(x);
        back = x;
    }
    
    int pop() 
    {
        if(in.empty()) return -1;

        if(in.size() == 1) 
        {
            int last = in.front();
            in.pop();
            back = -1;
            return last;
        }
        while(in.size() > 1) //
        {
            prev = in.front();
            in.pop();
            out.push(prev);
        }
        int last = in.front();
        back = prev;   
        in.pop();
        swap(in,out);
        return last;
    }
    
    int top() 
    {
        if(!in.empty()) return back  ;  //return back as its top is back 
        else return -1;
    }
    
    bool empty() 
    {
        return in.empty() && out.empty();    
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main()
{
    MyStack s;

    s.push(2000);
    cout << s.top() << endl ;
    s.pop();
    
    cout << s.top() << endl ;
    cout << (s.empty() ? "yes empty" : "not empty");
}