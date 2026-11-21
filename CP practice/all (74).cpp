#include <bits/stdc++.h>
using namespace std;


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

    int n;
    cin >> n;

    vector<Node*> nodes(n + 1);

    // Create nodes
    for (int i = 1; i <= n; i++) {
        nodes[i] = new Node(i);
    }


    for (int i = 1; i <= n; i++) {

        int k;
        cin >> k;

        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;

            nodes[i]->neighbors.push_back(nodes[v]);
        }
    }



    return 0;
}