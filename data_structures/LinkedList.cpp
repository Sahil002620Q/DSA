#include "LInkedList.h"

LL::LL()
{
    head = nullptr;
}

void LL::insAtBeginning(int insertable)
{
    node* newnode = new node ;  
    newnode->element = insertable; 
    newnode->next = head;  
    head = newnode;
}

void LL::insAtEnd(int insertable)
{
    if(head == nullptr)
    {
        insAtBeginning(insertable);
    }
    else
    {
        node* temp = head;
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }
        
        node* newnode = new node ;  
        newnode->element = insertable; 
        newnode->next = nullptr;  
        temp->next = newnode; 
    }
}

void LL::display()
{

    node* temp = head;
    
    while(temp != nullptr)
    {
        cout << temp->element << endl ;
        temp = temp->next;
    }
}



bool LL::isEmpty()
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

void LL::delFromStart()
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
}

void LL::delFromEnd()
{
    node* temp = head;

    if(isEmpty())
    {
        cout << "Error: cannot delete from empty linked list\n" ;
    }
    else if (temp->next == nullptr)
    {
        node* delme = temp; 
        head = nullptr;
        delete delme;
    }
    else
    {
        while(temp->next->next != nullptr) 
        {
            temp = temp->next; 
        }
        node* delme = temp->next ;
        temp->next = nullptr;
        delete delme;
    }
}

void LL::delByValue(int target)
{
    if(head == nullptr)
    {
        cout << "Error: cannot delete from empty linked list" << endl ;
    }
    else if(head->element == target)
    {
        delFromStart();
    }
    else
    {
        node* temp = head;
        while(temp->next->element != target)  
        {
            temp = temp->next;
        }
        node* delme = temp->next;
        temp->next = temp->next->next; 
        delete delme; 
    }
}

bool LL::search(int target)
{
    node* temp = head;
    while(temp != nullptr)
    {
        if(temp->element == target)
        {  
            return true;
        }
        temp = temp->next; 
    }
    delete temp;
    return false;
}

int LL::length()
{
    int count = 0;
    node* temp = head;
    while(temp != nullptr)
    {
        temp = temp->next;
        count += 1;
    }

    delete temp;
    return count;
}

void LL::insertAtPosition(int position,int Element)
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

