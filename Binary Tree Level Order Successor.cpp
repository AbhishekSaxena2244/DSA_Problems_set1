#include<bits/stdc++.h>
#include<queue>
#include<vector>
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

int Level_Order_Successor(Node *root,int key){
	queue<Node *>q;
	if(root==NULL)
	return -1;
	q.push(root);
	while(!q.empty()){
		Node *current=q.front();
		q.pop();
		if(current->left!=NULL)	
		    q.push(current->left);
		if(current->right!=NULL)	
		    q.push(current->right);
		if(q.empty())
		    return -1;
		if(current->data==key){
		    Node *successor=q.front();
		    return successor->data;
		}
	}
}

int main(){
	int key=3;
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	cout<<Level_Order_Successor(root,key);
}
