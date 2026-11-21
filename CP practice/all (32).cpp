#include <bits/stdc++.h>
using namespace std;
//Postorder Traversal (Iterative)
// Leetcode 145:
class Solution{
public:
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> ans;
        stack<TreeNode*> st;
        if(root!=NULL) st.push(root);
        while(st.size()>0){
            st.pop();
            ans.push_push(temp->val);
            if(temp->left!=NULL) st.push(temp->left);
            if(temp->right!=NULL) st.push(temp->right);
        }
        return(ans.begin(), ans.end());
        return ans;
    }
    
};

int main() {
	// your code goes here
 
}
