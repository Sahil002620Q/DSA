// head stores only next node ptr addr
// node contains elements and ptr addr the ptr addr holds addr of next node and last node have nulptr
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

    LL()
    {
        head = nullptr;
    }

    void insAtBeginning(int insertable)
    {
        node* newnode = new node ;  //done
        newnode->element = insertable; //done 
        newnode->next = head;  //done
        head = newnode;

        // cout << newnode->next << endl ;
        // cout << head->next << endl ;
        // head->next->element = insertable;

    }

    void insAtEnd(int insertable)
    {
        if(head == nullptr)
        {
            insAtBeginning(insertable);
        }
        else
        {
            node* temp = head;
            while(temp->next != nullptr) //temp->next from temp
            {
                temp = temp->next;
            }
            //temp is now last //actually last - 1
            
            node* newnode = new node ;  //done
            newnode->element = insertable; //done
            newnode->next = nullptr;  
            temp->next = newnode; //temp to temp->next

            // | HEAD | -> next
            // | NODE | ELEMENT | NEXT | ADDR1 | -> next   
        }
    }

    void display()
    {

        node* temp = head;
        
        while(temp != nullptr)
        {
            cout << temp->element << endl ;
            temp = temp->next;
        }
    }

    bool isEmpty()
    {
        if(head == nullptr)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void delFromStart()
    {
        if(isEmpty())
        {
            cout << "Error: cannot delete from empty linked list\n" ;
        }
        else
        {
            node* temp = head;
            head = head->next;
            delete temp;

        }
        // | HEAD | -> ADDR1
        // | NODE | ELEMENT | NEXT | ADDR1 | -> next 
        // | NODE | ELEMENT | NEXT | ADDR1 | -> next 
    }

    void delFromEnd()
    {
        node* temp = head;
    
        if(isEmpty())
        {
            cout << "Error: cannot delete from empty linked list\n" ;
        }
        else if (temp->next == nullptr)
        {
            temp = temp->next; //temp->next is nullptr
            head = temp->next;
            delete temp;
        }
        else
        {
            while(temp->next->next != nullptr) //maybe last secon
            {
                temp = temp->next; //last  node
            }
            temp->next = nullptr;     
            node* delme = temp->next;  //holds delable
            delete temp;

        }
    }
};
    


int main()
{
    cout << "\033[40m";
    LL list;
    cout << "\033[40m";
    list.insAtBeginning(10);
    list.insAtBeginning(100);
    list.insAtBeginning(1000);
    list.insAtEnd(2000);
    list.insAtEnd(200);
    list.insAtEnd(20);
    list.insAtEnd(299990);

    list.delFromStart(); //working
    // list.delFromEnd();
    list.display();
    cout << "\033[40mEND\n\033[0m" ;
    cout << "\033[38;5;135mEND\n\033[0m\033[40m" ;
    cout << "\033[40m";


    // // cout << n1.element << endl ;
    // // cout << n1.next << endl ;
    // // cout << n1.next->element << endl ;//using address of next get element 

    // cout << n2.element << endl ;
    // cout << n2.next << endl ;
    

    // cout << n3.element << endl ;
    // cout << n3.next << endl ;

    
    // cout << head->element << endl ;
    // cout << head->next->element << endl ;
    // cout << head->next->next->element << endl ;  //    <-
    
    // cout << head->next << endl ;
   
}