// head stores only next node ptr addr   working v2
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

    void temp()
    {

        node* temp = head;
        
        cout << "END" << endl ;
        cout << "temp : " << temp << endl ;
        cout << "temp->element : " << temp->element << endl ;
        cout << "temp->next : " << temp->next << endl ;
        cout << "temp->next->element : " << temp->next->element << endl ;
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
            //this is when head is not null but node 1 have null
            node* delme = temp; //temp->next to temp?
            head = nullptr;
            delete delme;
        }
        else
        {
            while(temp->next->next != nullptr) //maybe last secon
            {
                temp = temp->next; //last  node
            }//got last secon where node nonull  node null
            node* delme = temp->next ;
            temp->next = nullptr;
            delete delme;

        }
    }

    void delByValue(int target)
    {
        if(head == nullptr)
        {
            cout << "Error: cannot delete from empty linked list" << endl ;
        }
        else if(head->element == target)
        {
            delFromStart();
        }
        // else if(head->next != null){

        // }
        else{

            node* temp = head;
            while(temp->next->element != target)  //like my next is the target you need
            {
                temp = temp->next;
                // head = head->next;
            }
            // temp->next = nullptr;
            node* delme = temp->next;
            temp->next = temp->next->next; //fault here 
            delete delme;  //brute forceed
        }
    }

    bool search(int target)
    {
        node* temp = head;
        while(temp != nullptr)
        {
            if(temp->element == target)
            {  
                return true;
            }
            temp = temp->next; //was first who go exe before if
        }
        delete temp;
        return false;
    }

    int length()
    {
        int count = 0;
        node* temp = head;
        while(temp != nullptr)
        {
            temp = temp->next;
            count += 1;
        }

        cout << "length : " << count << endl ; 
        delete temp;
        return count;
    }

    // 0   1    2    3    4    5
    //          |

    void insertAtPosition(int position,int Element)
    {
        if(position == 0)
        {
            insAtBeginning(Element);
        }
        else if(length()  < position || position < 0)
        {
            cout << "Error : out of bound \n";
        }
        else
        {
            node* temp = head;
            node* newnode = new node;
            newnode->element = Element; 
            for (int i = 0; i < position - 1 ; i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        } 
    }

    void reverse();
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
    list.insAtEnd(290);
    list.delByValue(299990);

    // list.delFromStart(); //working
    list.delByValue(100);
    list.delByValue(10);
    list.display();
    list.length();
    cout << "\033[40mEND\n\033[0m" ;
    cout << "\033[38;5;135mEND\n\033[0m\033[40m" ;
    cout << "\033[40m";
    // list.temp();
    cout << "do 20 exist : " << list.search(20) << endl ;
    cout << "do 299990 exist : " << list.search(299990) << endl ;
    cout << "do 101 exist : " << list.search(101) << endl ;
    cout << "do 290 exist : " << list.search(290) << endl ;
    


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

// temp->next = temp->next->next;   im temp i have member ele and next change my value of next to next next
// cout << temp->next->element;  print the value my member next pointing to 