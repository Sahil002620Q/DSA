#ifndef LIST
#define LIST
#include <iostream>
using namespace std;

struct node
{
    int element;
    node* next;
};

class LL
{
    public:
    node* head;

    LL();    
    void insAtBeginning(int insertable);
    void insAtEnd(int insertable);
    void display();
    bool isEmpty();
    void delFromStart();
    void delFromEnd();
    void delByValue(int target);
    bool search(int target);
    int length();
    void insertAtPosition(int position,int Element);
};
    
#endif

