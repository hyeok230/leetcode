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
    ListNode *frontNode;
    
    bool recursiveN(ListNode* node)
    {
        if (node != NULL)
        {
            if (!recursiveN(node->next)) return false;
            if (frontNode->val != node->val) return false;
            frontNode = frontNode->next;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {    
        frontNode = head;
        return recursiveN(head);
    }
};