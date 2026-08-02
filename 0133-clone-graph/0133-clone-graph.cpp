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

          unordered_map<Node*,Node*>map;

        Node* dfs(Node* node){
            if(map.find(node)!=map.end()){
                return map[node];
            }
        else{
            Node* newnode=new Node(node->val);
            map[node]=newnode;
            for(Node*neighbor:node->neighbors){
                newnode->neighbors.push_back(dfs(neighbor));
            }
            return newnode;


        }
    }
 
    Node* cloneGraph(Node* node) {
        if(node==nullptr){
            return nullptr;
        }
        else{
            return dfs(node);
        }
  
    }
};