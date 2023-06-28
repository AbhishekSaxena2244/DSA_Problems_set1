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

vector<int>Right_View(Node *root){
	vector<int>current_list;
	if(root==NULL)
	    return current_list;
	queue<Node *>q;
	q.push(root);
	while(!q.empty()){
		int qSize=q.size();
		for(int i=0;i<qSize;i++){
			Node *current=q.front();
			q.pop();
			if(i==qSize-1)
			    current_list.push_back(current->data);
			if(current->left!=NULL)
			    q.push(current->left);
			if(current->right!=NULL)
			    q.push(current->right);
		}
	}
	return current_list;
}

int main(){
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->right=new Node(6);
	root->left->right->left=new Node(7);
	root->left->right->right=new Node(8);
	vector<int>v=Right_View(root);
	for(int i=0;i<v.size();i++)
	    cout<<v.at(i);
}
