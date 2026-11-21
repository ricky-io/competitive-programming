#include <bits/stdc++.h>
using namespace std;
clss Solution {
 public: 
    TreeNode* searchBST(TreeNode* root, int val){
        if(root == NULL) return NULL;
        else if(root->val == val) return root;
        else if(root->val > val) return searchBST(root->left, val);
        else return searchBST(root->right, val);
    }
};
int main() {
	// your code goes here

}
