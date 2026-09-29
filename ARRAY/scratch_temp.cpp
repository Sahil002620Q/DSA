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
//    MyLinkedList() {
  //      head = nullptr;
//    }
    
    int get(int index) 
    {
        node* temp = head;
        for(int i = 0; i < index ; i++)
        {
            temp= temp->next;
        }
        return  temp->val ;
    }
    
    void addAtHead(int vali) {
        node* newnode = new node ;  //done
        newnode->val= vali; //done 
        newnode->next = head  ;  //d  
        head =  newnode;
    }
    
    void addAtTail(int vali) {
        node* newnode = new node;
        node* temp = head;
        newnode->val = vali;
        newnode->next = nullptr;
        while(temp != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        
    }
    
    // void addAtIndex(int index, int vali) {
          
    //       node* temp = head;
    //       node* newnode = new node;
    //       newnode->val= vali;
    //     for(int i = 0; i < index;i++)
    //     {
    //         temp = temp->next;
    //     }
    //     newnode->next = temp->next;
    //     temp->next = newnode;
    // }
    
    // void deleteAtIndex(int index) {
    //     node* temp = head;
    //     for(int i = 0; i < index;i++)
    //     {
    //         temp = temp->next;
    //     }
    //     node* delme = temp->next;
    //     temp->next = temp->next->next;
    //     delete delme;
    // }


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
 
// ListNode* removeElements(ListNode* head, int val) 
// {
//        ListNode* temp  = head;
//        ListNode* newhead = nullptr;
//        while(temp  != nullptr)
//        {
//           if(temp == nullptr)
//           {
//               cout << "Error : cannot delete from empty linked list\n";
//           }
//           else if(temp->next->val  != val)
//           {
//               ListNode* newnode = new ListNode;
//               newnode->val = temp->val;
//           //   newnode
//               newnode->next = newhead;
//           }              
//               temp = temp->next;
              
//        }
// }


int main()
{
   LL ld;
   
   ld.addAtHead(10);
   ld.addAtHead(20);
   ld.addAtHead(30);
   ld.addAtTail(1000);
   cout << ld.get(2) << endl ;
   ld.display2();
   // cout << head->element << endl ;
   //   cout << head->next->element << endl ;
   // cout << head->next->next->element << endl ;  //    <-
}