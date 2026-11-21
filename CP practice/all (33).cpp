#include <bits/stdc++.h>
using namespace std;
//Inorder Traversal (Iterative)
// Leetcode 94:
class Solution{
public:
    vector<int> InorderTraversal(TreeNode* root){
        vector<int> ans;
        stack<TreeNode*> st;
        while(st.size()>0 || node){
            if(node){
                st.push(node);
                node = node->left;
            }
        }
        else{
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            node = temp->right;
        }
        return ans;
    }
    
};

int main() {
	// your code goes here
 
}
