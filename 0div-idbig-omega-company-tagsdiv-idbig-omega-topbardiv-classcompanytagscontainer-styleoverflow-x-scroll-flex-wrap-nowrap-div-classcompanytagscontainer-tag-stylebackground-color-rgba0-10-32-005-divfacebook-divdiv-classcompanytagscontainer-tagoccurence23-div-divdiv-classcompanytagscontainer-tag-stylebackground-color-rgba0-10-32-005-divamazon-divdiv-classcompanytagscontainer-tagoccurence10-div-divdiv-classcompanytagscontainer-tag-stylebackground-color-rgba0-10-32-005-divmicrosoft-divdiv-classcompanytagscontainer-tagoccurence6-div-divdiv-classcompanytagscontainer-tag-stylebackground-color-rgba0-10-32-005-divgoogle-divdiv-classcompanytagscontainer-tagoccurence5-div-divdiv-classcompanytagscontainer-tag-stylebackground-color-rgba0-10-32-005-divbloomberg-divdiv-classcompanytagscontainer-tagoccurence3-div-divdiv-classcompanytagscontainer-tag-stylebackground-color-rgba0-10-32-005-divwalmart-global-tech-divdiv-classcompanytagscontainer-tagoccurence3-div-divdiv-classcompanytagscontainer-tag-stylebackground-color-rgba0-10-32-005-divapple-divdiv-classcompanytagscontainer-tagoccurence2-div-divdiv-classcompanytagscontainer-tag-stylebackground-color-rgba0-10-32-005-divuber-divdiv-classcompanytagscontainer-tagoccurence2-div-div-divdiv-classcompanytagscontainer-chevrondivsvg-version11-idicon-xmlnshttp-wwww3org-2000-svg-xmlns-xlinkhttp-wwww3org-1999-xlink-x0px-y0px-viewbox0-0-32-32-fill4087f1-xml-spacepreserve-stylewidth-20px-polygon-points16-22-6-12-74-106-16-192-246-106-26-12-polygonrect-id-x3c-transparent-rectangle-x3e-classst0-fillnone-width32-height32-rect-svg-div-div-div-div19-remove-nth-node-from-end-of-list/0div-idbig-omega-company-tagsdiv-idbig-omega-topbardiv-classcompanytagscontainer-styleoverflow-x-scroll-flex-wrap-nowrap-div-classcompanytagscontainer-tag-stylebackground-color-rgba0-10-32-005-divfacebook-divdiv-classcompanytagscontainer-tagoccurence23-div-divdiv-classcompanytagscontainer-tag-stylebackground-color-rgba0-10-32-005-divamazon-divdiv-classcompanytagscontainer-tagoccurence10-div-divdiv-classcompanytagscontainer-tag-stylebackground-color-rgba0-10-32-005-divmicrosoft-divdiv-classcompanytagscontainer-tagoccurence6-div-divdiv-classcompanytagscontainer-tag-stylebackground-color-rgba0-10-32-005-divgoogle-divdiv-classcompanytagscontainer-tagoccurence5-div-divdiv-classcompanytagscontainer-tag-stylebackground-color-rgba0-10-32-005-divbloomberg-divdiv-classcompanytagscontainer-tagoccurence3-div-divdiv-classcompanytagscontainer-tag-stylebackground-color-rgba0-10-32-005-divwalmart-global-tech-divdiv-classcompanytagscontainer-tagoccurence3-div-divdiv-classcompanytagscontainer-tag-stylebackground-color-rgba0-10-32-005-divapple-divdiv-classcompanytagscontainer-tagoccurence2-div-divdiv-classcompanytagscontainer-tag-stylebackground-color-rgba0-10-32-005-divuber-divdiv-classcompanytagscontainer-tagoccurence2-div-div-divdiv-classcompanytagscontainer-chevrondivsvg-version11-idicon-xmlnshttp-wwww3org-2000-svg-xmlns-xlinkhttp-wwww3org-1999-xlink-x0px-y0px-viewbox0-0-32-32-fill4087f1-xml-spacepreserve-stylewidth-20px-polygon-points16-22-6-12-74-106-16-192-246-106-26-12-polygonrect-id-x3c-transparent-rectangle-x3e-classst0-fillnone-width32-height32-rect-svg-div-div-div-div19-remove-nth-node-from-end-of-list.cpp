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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* len = head; int cnt = 0;
        while(len)
        {
            len = len->next;
            cnt++;
        }
        ListNode* prev = NULL;
        ListNode* curr=head;
        if(n==cnt)
            return head->next;
        
        int temp = cnt-n;
        while(temp--)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete(curr);
        
        return head;
        
    }
};