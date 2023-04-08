/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* curr, unordered_map<Node*, Node*>& mp)
    {
        // create adjacency list..
        vector<Node*>neighbour;
        
        // now make clone for n size of node...
        Node* clone = new Node(curr->val);
        mp[curr]=clone;
        
        for(auto i : curr->neighbors)
        {
            if(mp.find(i) != mp.end())
            {
                neighbour.push_back(mp[i]);
            }
            else
            {
                neighbour.push_back(dfs(i, mp));
             }
          }
            clone->neighbors = neighbour;
            return clone;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*>mp;
        
        if(node==NULL)
            return NULL;
        //when single node is pressent...then
        if(node->neighbors.size()==0)
        {
            Node* clone = new Node(node->val);
            return clone;
        }
        
        return dfs(node,mp);
    }
};