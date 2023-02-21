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
private:
    ListNode* half(ListNode *head)
    {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while (fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head)
    {
        ListNode* preNode = NULL;
        ListNode* currNode = head;
        
        while (currNode)
        {
            ListNode* nextNode = currNode->next;
            currNode->next = preNode;
            preNode = currNode;
            currNode = nextNode;
        }
        
        return preNode;
    }
public:
    bool isPalindrome(ListNode* head) {
        
        if (head == NULL) return false;
        
        ListNode* beforeHalf = half(head);
        ListNode* secondList = reverseList(beforeHalf->next);
        
        ListNode* p1 = head;
        ListNode* p2 = secondList;
        
        bool result = true;
        while (result && p2)
        {
            if (p1->val != p2->val) result = false;
            p1 = p1->next;
            p2 = p2->next;
        }
        
        beforeHalf->next = reverseList(secondList);
        return result;
    }
};