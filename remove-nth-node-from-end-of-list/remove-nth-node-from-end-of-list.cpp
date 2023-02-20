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
    int nodeLength(ListNode* head)
    {
        int length = 1;
        ListNode* node = head;
        while (node->next)
        {
            length++;
            node = node->next;
        }
        return length;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tempNode = head;
        if (!tempNode->next)
        {
            ListNode* ret = NULL;
            return ret;
        }
        int length = nodeLength(tempNode);
        if (length == n)
        {
            tempNode = tempNode->next;
            return tempNode;
        }
        length = length - n - 1;
        cout << length;
        while (length--)
            tempNode = tempNode->next;       
        ListNode* nextNode = tempNode->next;
        tempNode->next = nextNode->next;
        delete(nextNode);
        
        return head;
    }
};