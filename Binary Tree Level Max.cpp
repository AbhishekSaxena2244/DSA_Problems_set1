#include<bits/stdc++.h>
#include<vector>
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

vector<int>Level_Max(Node *root){
	queue<Node *>q;
	vector<int>Max;
	if(root==NULL)
	    return Max;
	q.push(root);
	while(!q.empty()){
		int max_val=INT_MIN;
		int current_size=q.size();
		for(int i=0;i<current_size;i++){
			Node *current=q.front();
		    q.pop();
		    max_val=max(max_val,current->data);
		    if(current->left!=NULL)
		        q.push(current->left);
		    if(current->right!=NULL)
		        q.push(current->right);
		}
		Max.push_back(max_val);
	}
	return Max;
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
	
	vector<int>v=Level_Max(root);
	for(int i=0;i<v.size();i++)
	    cout<<v.at(i)<<" ";
}
