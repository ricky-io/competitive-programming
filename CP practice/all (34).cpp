#include <iostream>
using namespace std;

class TreeNode{
public: 
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//displaying all the nodes of a tree

void display(TreeNode* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

// displaying preorder root-left-right

void displayPre(TreeNode* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayPre(root->left);
    displayPre(root->right);
}

// displaying Inorder left-root-right

void displayIn(TreeNode* root){
    if(root == NULL) return;
    displayIn(root->left);
    cout<<root->val<<" ";
    displayIn(root->right);
}

// displayint PostOrder left-right-root

void displayPost(TreeNode* root){
    if(root == NULL);
    displayPost(root->left);
    displayPost(root->right);
    cout<<root->val<<" ";
}

int fnsize(TreeNode* root){
    int lst = 0;
    int rst = 0;
    if(root == NULL) return 0;
    int ans = 1 + fnsize(root->left) + fnsize(root->right);
    return ans;
    
}

int main() {
	// your code goes here
	TreeNode* a = new TreeNode('a');
	TreeNode* b = new TreeNode('b');
	TreeNode* c = new TreeNode('c');
	TreeNode* d = new TreeNode('d');
	TreeNode* e = new TreeNode('e');
	TreeNode* f = new TreeNode('f');
	TreeNode* g = new TreeNode('g');
	
	a->left = b;
	a->right = c;
	b->left = d;
	b->right = e;
	c->left = f;
	c->right = g;
	
	display(a);
	cout<<endl;
	cout<<fnsize(a);
	cout<<endl;

}
