
//  * Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp  = head;
        ListNode* newhead = nullptr;
        while(temp  != nullptr)
        {
            ListNode* newnode = new ListNode;
            newnode->val = temp->val;
            newnode->next = newhead;
            newhead = newnode;             
            temp = temp->next;
        }
        return newhead;
    }
};