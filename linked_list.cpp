// head stores only next node ptr addr  eorking v1
// node contains elements and ptr addr the ptr addr holds addr of next node and last node have nulptr
#include <iostream>
using namespace std;


class node
{
    public:
    int element;
    node* next;
    
    // node()
    // {
    //     head = nullptr;
    // }
};
    


int main()
{
    node n1;
    node n2;

    node* head;
    node* temp = head;
    head = &n1; 
    
    n1.element = 33;
    n1.next = nullptr;
    
    n2.element = 44;
    n2.next = nullptr;

    n1.next = &n2;

    cout << n1.element << endl ;
    cout << n1.next << endl ;
    cout << n1.next->element << endl ;//using address of next get element 

    cout << n2.element << endl ;
    cout << n2.next << endl ;

    cout << head->element << endl ;
    cout << head->next->element << endl ;

    while(temp != nullptr)
    {
        cout << temp->element << endl ;
        temp = temp->next ;
    }
}