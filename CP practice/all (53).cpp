#include <bits/stdc++.h>
using namespace std;

class Node{
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

void display(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int sum(Node* root){
    if(root == NULL) return 0;
    int count = root->val;
    count+=sum(root->left);
    count+=sum(root->right);
    return count;
}

int size(Node* root){
    if(root == NULL) return 0;
    int count = 1 + size(root->left) + size(root->right);
    return count;
}

int maxNode(Node* root){
    if(root == NULL) return 0;
    int value = max(root->val, max(maxNode(root->left), maxNode(root->right)));
    return value;
}

int levels(Node* root){
    if(root == NULL) return 0;
    int level = 1 + max(levels(root->left), levels(root->right));
    return level;
}

int main() {
	// your code goes here
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
	
	//display(a);
	//cout<<sum(a)<<"";
	//cout<<size(a)<<"";
	//cout<<maxNode(a)<<" ";
	cout<<levels(a)<<" ";


}
