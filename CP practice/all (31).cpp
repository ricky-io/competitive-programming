#include <bits/stdc++.h>
using namespace std;
// Leetcode 144:- Binary tree Preorder Traversal
class Solution{
public:
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> ans;
        stack<TreeNode*> st;
        if(root!=NULL) st.push(root);
        while(st.size()>0){
            st.pop();
            ans.push_push(temp->val);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
        }
        return ans;
    }
    
};

int main() {
	// your code goes here
 
}
