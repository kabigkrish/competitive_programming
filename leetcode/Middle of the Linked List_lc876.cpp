class Solution {
public:
    ListNode* getMiddleNode(ListNode* slow, ListNode* fast)
    {
        if (fast ==  NULL || fast->next == NULL) return slow;
        
        slow = slow->next;
        fast = fast->next->next;
        
        return getMiddleNode(slow, fast);
    }
    ListNode* middleNode(ListNode* head) {
        return getMiddleNode(head, head);
    }
};