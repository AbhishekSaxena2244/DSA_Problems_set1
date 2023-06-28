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

vector<float>Level_Avg(Node *root){
	queue<Node *>q;
	vector<float>Avg;
	if(root==NULL)
	    return Avg;
	q.push(root);
	while(!q.empty()){
		float sum=0;
		int current_size=q.size();
		for(int i=0;i<current_size;i++){
			Node *current=q.front();
		    q.pop();
		    sum+=current->data;
		    if(current->left!=NULL)
		        q.push(current->left);
		    if(current->right!=NULL)
		        q.push(current->right);
		}
		Avg.push_back(sum/current_size);
	}
	return Avg;
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
	
	vector<float>v=Level_Avg(root);
	for(int i=0;i<v.size();i++)
	    cout<<v.at(i)<<" ";
}
