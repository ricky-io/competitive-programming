#include <bits/stdc++.h>
using namespace std;

class Node{ // this is TreeNode
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    
};

  void displayTree(Node* root){
        if(root == NULL) return;
        cout<<root->val<<" ";
        displayTree(root->left);
        displayTree(root->right);
    }

    int sum(Node* root){
        if(root == NULL) return 0;
        return root->val + sum(root->left) + sum(root->right);
    }

    int size(Node* root){
        if(root == NULL) return 0;
        return 1 + size(root->left) + size(root->right);
    }

    int maxInTree(Node* root){
        if(root == NULL) return INT_MIN;
        int lMax = maxInTree(root->left);
        int rMax = maxInTree(root->right);
        return max(root->val, max(lMax, rMax));
    }

    int levels(Node* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    
    void nthLevel(Node* root, int curr, int level){
        if(root == NULL) return; //base case
        if(curr == level){
             cout<<root->val<<" ";  //root
             return;
        }
        nthLevel(root->left, curr+1, level);  // left
        nthLevel(root->right, curr+1, level); // right
    }
    
    void levelOrder(Node* root){
        int n = levels(root);
        for(int i=1; i<=n; i++){
            nthLevel(root, 1, i);
        }
    }

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    levelOrder(a);
   

}


