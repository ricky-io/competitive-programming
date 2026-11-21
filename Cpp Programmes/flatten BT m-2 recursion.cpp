#include <bits/stdc++.h>
using namespace std;

// Flatten Binary Tree method 2: Recursion;
class Solution {
public:

    void flatten(TreeNode* root) {
       if(root == NULL) return;
       TreeNode* l = root->left;
       TreeNode* r = root->right;
       root->left = NULL;
       root->right = NULL;
       flatten(l);
       flatten(r);
       root->right = l;
       TreeNode* temp = root;
       while(temp->right!=NULL) temp = temp->right;
       temp->right = r;
    }
};

int main() {
	// your code goes here

}
