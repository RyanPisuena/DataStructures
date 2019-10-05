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
    void deleteNode(ListNode* node) {
    // 4-->5-->1-->9 Delete 1
    /**
    *4-->5-->1-->9
    4-->*5-->1-->9
    
    4-->5-->*1-->9
    4-->5-->9 
    5 next pointer points to 9
    1 points to Null
    
    **/
    // if head points to null, there is nothing to delete
    if(node->next == NULL)
    {
        cout << "Nothing to delete"; 
        return;
    }

    node->val = node->next->val;
    node->next = node->next->next;
        }
    };
