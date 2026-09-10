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
    
     
    node* removeElements(node* head, int val) 
   {
       node* temp  = head;
       node* newhead = nullptr;
       while(temp  != nullptr)
       {
         if(temp->element != val)//if ele is not val then put ele to new node 
          {
              node* newnode = new node;
              newnode->element = temp->element;
          //   newnode
              newnode->next = newhead;
              newhead = newnode; //how i literally doesnt understand what happened here
          }              
          temp = temp->next;
        }
            return newhead;
   }

    node* reverse(node* head) 
   {
        node* temp  = head;
        node* newhead = nullptr;
        while(temp  != nullptr)
        {
            node* newnode = new node;
            newnode->element = temp->element;
            newnode->next = newhead;
            newhead = newnode;             
            temp = temp->next;
        }
        return newhead;
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
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
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
    ld.insAtEnd(10);
    ld.insAtEnd(20);
    ld.insAtEnd(30);
    node* head = ld.geth();
    node* list = ld.removeElements(head,10);
    node* tempx = list;
    while(tempx != nullptr)
    {
       cout << tempx->element << ' ' ;
       tempx = tempx->next;
    }
    
    // node* list2 = ld.reverse(head);
    // node* tempx2 = list;
    // while(tempx2 != nullptr)
    // {
    //     cout << tempx2->element << ' ' ;
    //     tempx2 = tempx2->next;
    // }
   
    ld.display();
    // cout << head->element << endl ;
    //   cout << head->next->element << endl ;
    // cout << head->next->next->element << endl ;  //    <-
}