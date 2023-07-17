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
    ListNode* join(ListNode* l1, ListNode* l2)
    {
        stack<int>s1,s2;
        while(l1 != NULL)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2 != NULL)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }
        
        ListNode* temp = NULL;
        int carry =0;
        
        while(!s1.empty() || !s2.empty() || carry !=0)
        {
            int d1 = !s1.empty()? s1.top() : 0;
            int d2 = !s2.empty()? s2.top() : 0;
            int sum = d1+d2+carry;
            int d = sum%10;
            carry = sum/10;
            
            ListNode* newNode = new ListNode(d);
            newNode->next  = temp;
            temp = newNode;
            
            if(!s1.empty())
                s1.pop();
            if(!s2.empty())
                s2.pop();
        }
        return temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = join(l1, l2);
        return ans;
    }
};