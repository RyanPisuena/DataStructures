/*****
Given a linked list, determine if it has a cycle in it.
To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.


*****************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
    
    if(head ==NULL)
        return false;
        
    ListNode *runner = head->next;
    ListNode *walker = head;
        
    while(runner != NULL && walker != NULL && runner->next != NULL)
    {
        if(runner==walker)
            return true;
        runner= runner->next->next;
        walker = walker->next;
    }
        return false;
    }
};
