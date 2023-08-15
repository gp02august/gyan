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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
        
        ListNode* smPtr = small;
        ListNode* lrgPtr = large;
        
        while(head != NULL)
        {
            if(head->val < x)
            {
                smPtr->next = head;
                smPtr = smPtr->next;
            }
            
            else
            {
                lrgPtr->next = head;
                lrgPtr = lrgPtr->next;
            }
            
            head = head->next;
        }
        
        smPtr->next = large->next;
        lrgPtr->next = NULL;
        
        return small->next;
    }
};