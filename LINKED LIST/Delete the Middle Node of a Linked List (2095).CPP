/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL)
        return NULL;
    if (head->next == NULL) 
    {
        delete head;
        return NULL;
    }
    ListNode* copyHead = head;
  
    // Find the count of nodes
    int count = countOfNodes(head);
  
    // Find the middle node
    int mid = count / 2;
  
    // Delete the middle node
    while (mid-- > 1) 
    {
        head = head->next;
    }
  
    // Delete the middle node
    head->next = head->next->next;
  
    return copyHead;
}

int countOfNodes(ListNode* head)
{
    int count = 0;
    while (head != NULL) 
    {
        head = head->next;
        count++;
    }
    return count;
}

};
