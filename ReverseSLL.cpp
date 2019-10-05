/****
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
Example: 
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
***********/

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
    ListNode* reverseList(ListNode* head) {
    
    // ListNode for current and past nodes; 
            ListNode *current = head;
            ListNode *past = NULL;

    // Create a while loop that runs while current is not NULL and if it is it just returns       // past. Past is returned because at the end of the loop past is now where head originally     // was
        while(current != NULL)
        {
            ListNode * future = current->next;
            current->next = past;
            past = current;
            current = future;
        }
    //   1 ->2 -> 3 -> 4 -> 5 -> Null
    // P C  N listNode Future = current -> next;
    // current -> next = past;
    // Null <- 1  2-> 3 -> 4 -> 5 -> Null
    //         P  C   N  prev = current
    // current = Future
        return past;
    }
};
