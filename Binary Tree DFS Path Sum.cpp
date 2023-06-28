#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *left,*right;
		
		Node(int val){
			data=val;
			left=right=NULL;
		}
};
Node *root=NULL;

bool Path_Sum(Node *root,int sum){
	if(root==NULL)
	    return false;
	if(root->data==sum && root->left==NULL && root->right==NULL)
	    return true;
	return (Path_Sum(root->left,sum-root->data) || Path_Sum(root->right,sum-root->data));
}

int main(){
	root=new Node(12);
	root->left=new Node(7);
	root->left->left=new Node(9);
	root->left->left->left=new Node(3);
	root->right=new Node(1);
	root->right->left=new Node(10);
	root->right->right=new Node(5);
	cout<<Path_Sum(root,23);
}
