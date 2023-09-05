/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        map<Node*,Node*>m;
        
        Node* curr=head;
        Node* dummy=new Node(0);
        Node* curr2=dummy;
        while(curr)
        {
            Node* temp=new Node(curr->val);
            dummy->next=temp;
            m[curr]=temp;
            curr=curr->next;
            dummy=dummy->next;
        }
        Node* itr=curr2->next;
        curr=head;
        while(curr!=NULL)
        {
            itr->random=m[curr->random];
            curr=curr->next;
            itr=itr->next;
        }
        return curr2->next;
    }
};