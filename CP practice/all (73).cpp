#include <bits/stdc++.h>
using namespace std;


// LEETCODE --> 133 clone graph :
class Solution {
public:
    vector<Node*> nodeRegister;
    void dfs(Node* actual, Node* clone){
        for(auto neighbor : actual->neighbors){
            if(not nodeRegister[neighbor->val]){
                // create the neighbour for the first time
                Node* newNode = new Node(neighbor->val);
                nodeRegister[newNode->val] = newNode;
                clone->neighbors.push_back(newNode);
                dfs(neighbor, newNode);
            } else {
                clone->neighbors.push_back(nodeRegister[neighbor->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        Node* clone = new Node(node->val);
        nodeRegister.resize(110, NULL); // this array conatins ref to the created nodes
        nodeRegister[clone->val] = clone;
        dfs(node, clone);
        return clone;
    }
};

int main() {
	// your code goes here

}
