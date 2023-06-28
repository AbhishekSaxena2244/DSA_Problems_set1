#include<bits/stdc++.h>
#include<queue>
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

int Min_Depth(Node *root){
	int count=0;
	if(root==NULL)
	    return -1;
	queue<Node *>q;
	q.push(root);
	while(!q.empty()){
		Node *current=q.front();
		q.pop();
		if(current->left==NULL && current->right==NULL)
		    break;
		if(current->left!=NULL)
		    q.push(current->left);
		if(current->right!=NULL)
		    q.push(current->right);
		count++;
	}
	return count;
}

int main(){
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->right=new Node(5);
	root->left->right->left=new Node(7);
	root->left->right->right=new Node(8);
	cout<<Min_Depth(root);
}
