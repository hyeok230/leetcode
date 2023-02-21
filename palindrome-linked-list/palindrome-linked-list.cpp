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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        ListNode* pre_node = NULL;
        ListNode* new_node;
        
        while (temp)
        {
            new_node = new ListNode(temp->val);
            new_node->next = pre_node;
            temp = temp->next;
            pre_node = new_node;
        }
        
        while (pre_node)
        {
            if (pre_node->val != head->val)
                return false;
            pre_node = pre_node->next;
            head = head->next;
        }
        return true;
    }
};