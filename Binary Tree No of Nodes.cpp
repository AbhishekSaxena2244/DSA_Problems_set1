#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *left, *right;
		
	Node(int val){
		data=val;
		left=right=NULL;
	}
};

Node *root=NULL;

int PreOrder(Node *root){
	if(root==NULL)
	    return 0;
	return 1+PreOrder(root->left)+PreOrder(root->right);
}

int main(){
	root= new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	cout<<"Total roots in the tree: "<<PreOrder(root);
}
