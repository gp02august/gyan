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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // sort(nums.begin(), nums.end());
//         ListNode* dummy = new ListNode(0);
//         ListNode* temp = dummy;
        
//         while(head != NULL){
//             bool flag = false;
//             for(int i=0; i<nums.size(); i++){
//                 if(head->val == nums[i]){
//                     flag=true;
//                     break;
//                 }
//             }
//             if(!flag){
//                 temp->next=new ListNode(head->val);
//                 temp=temp->next;
//             }
//             head=head->next;
//         }
//         return dummy->next;    this approach is brut force   now it optimized using
//         set data structure....
        unordered_set<int>s(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        // Traverse the linked list
        while (head != nullptr) {
            // If the current node's value is not in the set, add it to the new list
            if (s.find(head->val) == s.end()) {
                temp->next = new ListNode(head->val);
                temp = temp->next;
            }
            // Move to the next node
            head = head->next;
        }

        return dummy->next;
    }
};