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

vector<vector<int> >Traversal(Node *root){
	vector<vector<int> >bfs;
	if(root==NULL)
	return bfs;
	queue<Node *>q;
	q.push(root);
	bool LeftToRight=true;
	while(!q.empty()){
		int current_size=q.size();
		vector<int>current_list(current_size);
		for(int i=0;i<current_size;i++){
			Node *current_node=q.front();
		    q.pop();
//		    current_list.push_back(current_node->data);
		    if(LeftToRight)
		        current_list[i]=current_node->data;
		    else
		        current_list[current_size-1-i]=current_node->data;
		    if(current_node->left!=NULL)
		        q.push(current_node->left);
		    if(current_node->right!=NULL)
		        q.push(current_node->right);
		}
		bfs.push_back(current_list);
		LeftToRight=!LeftToRight;
	}
	return bfs;
}

int main(){
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	vector<vector<int> >v=Traversal(root);
	for(auto i:v){
		for(auto j:i)
		cout<<j<<" ";
		cout<<endl;
	}
}
