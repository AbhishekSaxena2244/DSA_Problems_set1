#include<bits/stdc++.h>
#include<queue>
#include<vector>
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

int Max_Depth(Node *root){
	queue<Node *>q;
	int count=0;
	if(root==NULL)
	    return count;
	q.push(root);
	while(!q.empty()){
		for(int i=0;i<q.size();i++){
		    Node *current=q.front();
		    q.pop();
		    if(current->left!=NULL)
		        q.push(current->left);
		    if(current->right!=NULL)
		        q.push(current->right);
		}
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
	root->right->right=new Node(6);
	root->left->right->left=new Node(7);
	root->left->right->right=new Node(8);
	cout<<Max_Depth(root);
}
