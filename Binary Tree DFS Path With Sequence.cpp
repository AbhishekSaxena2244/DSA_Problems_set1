#include<bits/stdc++.h>
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

bool Path_Sequence(Node *root,vector<int> sequence,int i){
	if(root==NULL)
	    return false;
	if(i>=sequence.size() || root->data!=sequence[i])
	    return false;
	if(i==sequence.size()-1 && root->left==NULL && root->right==NULL)
	    return true;
	return Path_Sequence(root->left,sequence,i+1) || Path_Sequence(root->right,sequence,i+1);
}

int main(){
	root=new Node(3);
	root->left=new Node(7);
	root->right=new Node(1);
	root->left->left=new Node(9);
	root->right->left=new Node(2);
	root->right->right=new Node(5);
	cout<<Path_Sequence(root,vector<int> {3,1,2},0);
}
