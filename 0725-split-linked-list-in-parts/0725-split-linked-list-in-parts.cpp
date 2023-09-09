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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int l=0;
        ListNode* curr = head;
        while(curr != NULL)
        {
            l++;
            curr = curr->next;
        }
        
        int eachBucketNodes = l/k;
        int extra_Nodes  = l%k;
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        vector<ListNode*>ans(k, NULL);
        
        for(int i=0; i<k; i++)
        {
            ans[i] = temp;
            for(int j=1; j<=eachBucketNodes + (extra_Nodes > 0 ? 1: 0); j++)
            {
                prev = temp;
                temp = temp->next;
            }
            if(prev !=  NULL)
                prev->next = NULL;
            
            extra_Nodes--;
        }
        return ans;
    }
};