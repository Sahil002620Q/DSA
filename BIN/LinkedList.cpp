#include <iostream>
using namespace std;

class Linkedlist
{
    private:
        struct Node
        {
            int ele;
            Node* next;
        };
            
        int pointer;

        Node* HEAD;

    public:
        Linkedlist()
        {
            HEAD = nullptr;
        }

        void push(int element)
        {
            Node newNode;
            newNode.ele = element;
            newNode.next = nullptr;
        }

        void display() 
        {
            int temp = HEAD;
        }

};


int main() 
{
    Linkedlist listx;
    listx.push(20);

}


