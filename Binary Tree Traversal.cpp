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

void PreOrderTraversal(Node *root){
	if(root==NULL)
	    return;
	cout<<root->data<<" ";
	PreOrderTraversal(root->left);
	PreOrderTraversal(root->right);
}

void InOrderTraversal(Node *root){
	if(root==NULL)
	    return;
	
	InOrderTraversal(root->left);
	cout<<root->data<<" ";
	InOrderTraversal(root->right);
}

void PostOrderTraversal(Node *root){
	if(root==NULL)
	    return;
	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	cout<<root->data<<" ";
}

int main(){
	root= new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	cout<<"PreOrderTraversal: ";
	PreOrderTraversal(root);
	
	cout<<endl<<"InOrderTraversal: ";
	InOrderTraversal(root);
	
	cout<<endl<<"PostOrderTraversal: ";
	PostOrderTraversal(root);
}
