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
        unordered_set<ListNode*> s;
        while (1)
        {
            if (s.count(head))
                return true;
            s.insert(head);
            if (head)
                head = head->next;
            else
                return false;
        }
    }
};