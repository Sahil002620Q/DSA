// head stores only next node ptr addr
// node contains elements and ptr addr the ptr addr holds addr of next node and last node have nulptr
#include <iostream>
using namespace std;

struct node
{
    int element;
    int val;
    node* next;
};

class LL
{
    
public:
    int length()
    {
        int length = 0;
        node* temp = head;
        while(temp != nullptr)
        {
            temp = temp->next;
            length += 1;
        }
        // delete temp;
        return length;
    }

    int get(int index)  //done
    {
       
        int length = 0;
        node* temp = head;
        while(temp != nullptr)
        {
            temp = temp->next;
            length += 1;
        }
        delete temp;
        if(length < index+1)
        {
            return -1;
        }
        else
        {
            node* temp2 = head;
            for(int i = 0; i < index ; i++)
            {
                temp2= temp2->next;
            }
            return  temp2->val ;
        }
        
    }
    
    void addAtHead(int val) { //done
        node* newnode = new node ; 
        newnode->val= val; 
        newnode->next = head  ;   
        head =  newnode;
    }
    
    void addAtTail(int val) {
        if(head == nullptr)
        {
            addAtHead(val);
        }
        else
        {
            node* newnode = new node;
            node* temp = head;  //
            newnode->val = val; //
            newnode->next = nullptr; //
            while(temp->next != nullptr) //error was here
            {
                temp = temp->next;
            }
            temp->next = newnode;
            
        }
    }
    
    void addAtIndex(int index, int val) {   
        int length = 0;
        node* temp = head;
        while(temp != nullptr)
        {
            temp = temp->next;
            length += 1;
        }

        if(index < 0)
        {
            //error cant remove negative index element
        }
        else if(index == 0)
        {
            addAtHead(val);
        }
        else if(index < length)
        {
            
            //if index less tna lengthelse if(length )
            node* temp = head;
            node* newnode = new node;
            newnode->val= val;
            for(int i = 0; i < index-1;i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        else  
        {
            cout << "Error : cannot at at that index\n";
        } 
    }
    
    void deleteAtIndex(int index) {  //done
        
        if(head == nullptr)
        {
            //cannot delete from empty linked list having 0 nodes
        }
        else if(index == 0) //first ele
        {
            node* temp = head;
            node* delme = temp;
            head = temp->next;
            delete delme;

        }
        else
        {
            int length = 0;            
            node* temp = head;         
            while(temp != nullptr)     
            {                          
                temp = temp->next;     
                length += 1;
            }
            
            if(length == index+1)
            {
                delFromEnd();
            }
            else if(length < index+1)
            {
                // cant delete at that index which doesnt exist
            }
            else
            {
                node* temp2 = head;
                for(int i = 0; i < index -1 ;i++)
                {
                    temp2 = temp2->next;
                }
                node* delme = temp2->next;
                temp2->next = temp2->next->next;
                delete delme;
            }
        }
    }


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
    public:
    node* head;
    
    LL()
    {
        head = nullptr;
    }
    
    node* geth()
    {
        return head;
    }    

    
    // void insAtBeginning(int insertable)
    // {
    //     node* newnode = new node ;  //done
    //     newnode->element = insertable; //done 
    //     newnode->next = head;  //done
    //     head = newnode;

    //     // cout << newnode->next << endl ;
    //     // cout << head->next << endl ;
    //     // head->next->element = insertable;

    // }

    // void insAtEnd(int insertable)
    // {
    //     if(head == nullptr)
    //     {
    //         insAtBeginning(insertable);
    //     }
    //     else
    //     {
    //         node* temp = head;
    //         while(temp->next != nullptr) //temp->next from temp
    //         {
    //             temp = temp->next;
    //         }
    //         //temp is now last //actually last - 1
            
    //         node* newnode = new node ;  //done
    //         newnode->element = insertable; //done
    //         newnode->next = nullptr;  
    //         temp->next = newnode; //temp to temp->next

    //         // | HEAD | -> next
    //         // | NODE | ELEMENT | NEXT | ADDR1 | -> next   
    //     }
    // }

    void display()
    {
        node* temp = head;
        
        while(temp != nullptr)
        {
            cout << temp->element << endl ;
            temp = temp->next;
        }
    }
    
    void display2()
    {
        node* temp = head;
        
        while(temp != nullptr)
        {
            cout << temp->val << endl ;
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
    
     
//     node* removeElements(node* head, int val) 
//    {
//        node* temp  = head;
//        node* newhead = nullptr;
//        while(temp  != nullptr)
//        {
//           if(temp == nullptr)
//           {
//               cout << "Error : cannot delete from empty linked list\n";
//           }
//           else if(temp->next->element != val)
//           {
//               node* newnode = new node;
//               newnode->element = temp->element;
//           //   newnode
//               newnode->next = newhead;
//           }              
//               temp = temp->next;
//        }
//    }

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
    
    void deleteEle(int rm)
    {
        node* temp = head;
    
        if(isEmpty())
        {
            cout << "Error: cannot delete from empty linked list\n" ;
        }

        else if(head->element == rm)
        {
            delFromStart();
        }
        else
        {
            while(temp->element != rm)
            { temp = temp->next;}
            node* delme = temp;
            temp->next->next = temp; //erro
        }    
    }    
};
    

 // Definition for singly-linked list.
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
 


int main()
{
   LL ld;
   
//    ld.addAtHead(10);
//    ld.addAtHead(20);
//    ld.addAtHead(30);
//    ld.addAtHead(99);
//    ld.addAtHead(101);
    ld.addAtTail(1); 
    ld.addAtTail(10); 
    ld.addAtTail(100); 
    ld.addAtTail(1000); 
    ld.addAtTail(10000); 
    ld.addAtTail(100000); 
    ld.addAtTail(1100000); 
   
    // ld.addAtIndex(1,999);
    // ld.deleteAtIndex(1);
    cout << ld.get(0) << endl ;
    ld.addAtIndex(0,999); cout << "inserted\n";
    ld.addAtIndex(5,999); cout << "inserted\n";
    cout << ld.get(0) << endl ;
    cout << "end\n";
    ld.display2();
    //    cout << "------------\n";
   
    // LL myLinkedList ;
    // myLinkedList.addAtHead(1);
    // myLinkedList.addAtTail(3);
    // myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
    // cout << myLinkedList.get(1) << endl ;              // return 2
    // myLinkedList.deleteAtIndex(1)  ;    // now the linked list is 1->3
    // cout << myLinkedList.get(1) << endl; 
}