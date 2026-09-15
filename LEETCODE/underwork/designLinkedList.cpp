// class MyLinkedList {
// public:
//     struct node
//     {
//         int val;
//         node* next;
//     };
//     node* head;
//     MyLinkedList() {
//         head = nullptr;
//     }
    
//     int get(int index) { //done
//         int length = 0;
//         node* temp = head;
//         while(temp != nullptr)
//         {
//             temp = temp->next;
//             length += 1;
//         }
//         // delete temp;
//         if(length < index+1)
//         {
//             return -1;
//         }
//         else
//         {
//             node* temp2 = head;
//             for(int i = 0; i < index ; i++)
//             {
//                 temp2= temp2->next;
//             }
//             return  temp2->val ;
//         }
//     }
    
//     void addAtHead(int val) { //done
//         node* newnode = new node ; 
//         newnode->val= val; 
//         newnode->next = head  ;   
//         head =  newnode;
//     }
    
//     void addAtTail(int val) {  //done
//         if(head == nullptr)
//         {
//             addAtHead(val);
//         }
//         else
//         {
//             node* newnode = new node;
//             node* temp = head;  //
//             newnode->val = val; //
//             newnode->next = nullptr; //
//             while(temp->next != nullptr) //error was here
//             {
//                 temp = temp->next;
//             }
//             temp->next = newnode;
            
//         }
//     }
    
//     void addAtIndex(int index, int val) {
//         node* temp = head;
//         node* newnode = new node;
//         newnode->val= val;
//         for(int i = 0; i < index;i++)
//         {
//             temp = temp->next;
//         }
//         newnode->next = temp->next;
//         temp->next = newnode;
//     }
    
//     void deleteAtIndex(int index) {
//         if(index == 0)
//         {
//             node* temp = head;
//             node* delme = temp;
//             head = temp->next;
//             delete delme;

//         }
//         else
//         {

//             int length = 0;
//             node* temp = head;
//             while(temp != nullptr)
//             {
//                 temp = temp->next;
//                 length += 1;
//             }
//             delete temp;
//             if(length <= index+1)
//             {
//                 // cant delete at that index which doesnt exist
//             }
//             else
//             {
//                 node* temp2 = head;
//                 for(int i = 0; i < index -1 ;i++)
//                 {
//                     temp2 = temp2->next;
//                 }
//                 node* delme = temp2->next;
//                 temp2->next = temp2->next->next;
//                 delete delme;
//             }
//         }
//     }
// };

// /**
//  * Your MyLinkedList object will be instantiated and called as such:
//  * MyLinkedList* obj = new MyLinkedList();
//  * int param_1 = obj->get(index);
//  * obj->addAtHead(val);
//  * obj->addAtTail(val);
//  * obj->addAtIndex(index,val);
//  * obj->deleteAtIndex(index);
//  */
// wrong