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

int All_Path_Sum(Node *root,int sum){
	if(root==NULL)
	return 0;
	sum=sum*10+root->data;
	if(root->left==NULL && root->right==NULL)
	return sum;
	return All_Path_Sum(root->left,sum)+All_Path_Sum(root->right,sum);
}

int main(){
	root=new Node(3);
	root->left=new Node(7);
	root->right=new Node(1);
	root->left->left=new Node(9);
	root->right->left=new Node(4);
	root->right->right=new Node(5);
	cout<<All_Path_Sum(root,0);
}
